CMAKE_MINIMUM_REQUIRED(VERSION 3.18.2)

project(KursovaArch)

set(CMAKE_CXX_STANDARD 14)

set(asol sources/asol.c)

add_executable(asol ${asol})

set(ssol sources/ssol.c)

add_executable(ssol ${ssol})

set(main sources/main.cpp)

add_executable(main ${main})


#add_custom_target( make_exec ALL
#COMMAND ${asol} ${}
#WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}/../doc
#COMMENT "Generating API documentation with Doxygen"
#VERBATIM )