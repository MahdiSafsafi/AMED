cmake_minimum_required(VERSION 3.15)

project(AMED)

# check if a given option is enabled.
function(option_enabled)
	if(${${ARGV0}})
		set(${ARGV1} 1 PARENT_SCOPE)
	else()
		set(${ARGV1} 0 PARENT_SCOPE)
	endif()
endfunction()


# options:
option (AMED_BUILD_SHARED_LIB "build shared library." OFF)
option (AMED_X86     "x86 support."     ON)
option (AMED_AARCH32 "aarch32 support." ON)
option (AMED_AARCH64 "aarch64 support." ON)
option (AMED_DECODER "decoder support." ON)
option (AMED_PRINTER "enable printer."  ON)
option (AMED_LIMIT_STRINGS "disable optional strings." ON)
option (AMED_BUILD_EXAMPLES "build examples." ON)


# architectures:
set(ARCHITECTURES ${AMED_X86} ${AMED_AARCH32} ${AMED_AARCH64})
set(ARCHITECTURE_NAMES x86 aarch32 aarch64)

# useful variables:
if(AMED_PRINTER AND NOT AMED_DECODER)
	message(FATAL_ERROR "AMED_PRINTER requires 'AMED_DECODER' ON.")
endif()

if(AMED_AARCH32 OR AMED_AARCH64)
	set(AMED_ARM ON)
endif()

if(AMED_X86 AND AMED_AARCH32 AND AMED_AARCH64)
	set(AMED_ALL ON)
endif()


# library type: [static, shared]
if(AMED_BUILD_SHARED_LIB)
	message (WARNING  "for now, its not very well supported.")
	add_library(AMED SHARED)
else()
	add_library(AMED STATIC)
endif()

if(AMED_X86)
	target_compile_definitions(AMED PRIVATE "AMED_X86")
endif()


if(AMED_AARCH32)
	target_compile_definitions(AMED PRIVATE "AMED_AARCH32")
endif()


if(AMED_AARCH64)
	target_compile_definitions(AMED PRIVATE "AMED_AARCH64")
endif()

if(AMED_DECODER)
	target_compile_definitions(AMED PRIVATE "AMED_DECODER")
endif()

if(AMED_PRINTER)
	target_compile_definitions(AMED PRIVATE "AMED_PRINTER")
endif()


# add_architecture : adds new architecture to the build system.
function(add_architecture)
	set (arch    ${ARGV0})
	set (source "source/${arch}")
	message(STATUS "adding architecture '${arch}'...")
	file(GLOB files "${source}/*.c")
	if(AMED_LIMIT_STRINGS)
		# do not include optional strings.
		message(STATUS "removing optional-strings from architecture '${arch}'.")
		list(FILTER files EXCLUDE REGEX "optional-strings\.c$")
	endif()
	if(NOT AMED_PRINTER)
		# no printer.
		message(STATUS "removing printer from architecture '${arch}'.")
		list(FILTER files EXCLUDE REGEX "printer\.c$")
	endif()
	if(NOT AMED_DECODER)
		# no decoder.
		message(STATUS "removing decoder from architecture '${arch}'.")
		list(FILTER files EXCLUDE REGEX "decoder\.c$")
	endif()
	# log the collected files:
	message(STATUS "collected c-files for architecture '${arch}':")
	foreach(sfile ${files})
		message(STATUS  ${sfile})
	endforeach(sfile)
	target_sources(AMED PUBLIC ${files})
endfunction()

# determinate active architectures:
list(LENGTH ARCHITECTURES count)
math(EXPR count "${count}-1")
foreach(i RANGE ${count})
	list(GET ARCHITECTURES ${i} supported)
	if(${supported})
		list(GET ARCHITECTURE_NAMES ${i} name)
		add_architecture(${name})
	endif(${supported})
endforeach(i)


# include directory: 
include_directories(include)


if(AMED_DECODER)
	target_sources(AMED PRIVATE "source/decoder.c")
endif()

# some files are only used by aarch32, aarch64:
if(AMED_ARM)
	target_sources(AMED PRIVATE "source/armimm.c")
endif()

# printer:
if(AMED_PRINTER)
	target_sources(AMED PRIVATE "source/shared-strings.c")
	target_sources(AMED PRIVATE "source/printer.c")
endif()



# build examples:

# if(AMED_BUILD_EXAMPLES)
# 	file(GLOB files "examples/*.c")
# 	foreach(sfile ${files})
# 		string(REGEX MATCH "([a-zA-Z0-9]+)\.c$" name ${sfile})
# 		set(name  ${CMAKE_MATCH_1})
# 		add_executable(${name} ${sfile})
# 		target_link_libraries(${name} AMED)
# 	endforeach(sfile)
# endif(AMED_BUILD_EXAMPLES)

if(AMED_BUILD_EXAMPLES)
	# we add an example to the build system only if all options required 
	# by that example are turned on.
	
	# example option1 option2 ... optionN
	set(EXAMPLES  
		"example1 AMED_AARCH32 AMED_AARCH64 AMED_X86     AMED_DECODER AMED_PRINTER"
		"example2 AMED_AARCH32 AMED_DECODER AMED_PRINTER"
		"example3 AMED_AARCH64 AMED_DECODER AMED_PRINTER"
	)
	
	foreach(example ${EXAMPLES})
		string(REGEX MATCHALL "([a-zA-Z_0-9]+)" matched ${example})
		list(GET matched 0 name)
		list(REMOVE_AT matched 0)
		# just assume its enabled. 
		set(accept 1)
		foreach (opt ${matched})
			option_enabled(opt accept)
			if(NOT ${accept})
				break()
			endif()
		endforeach()
		if(${accept})
			set(sfile "examples/${name}.c")
			get_filename_component(sfile "${CMAKE_CURRENT_LIST_DIR}/${sfile}" ABSOLUTE)
			if(EXISTS ${sfile})
				message(STATUS "adding example '${sfile}'")
				add_executable(${name} ${sfile})
				target_link_libraries(${name} AMED)
			else()
				# need to synchronize ...
				message("skipping file '${sfile}' because it does not exists.")
			endif()
		endif(${accept})
	endforeach()
endif(AMED_BUILD_EXAMPLES)

