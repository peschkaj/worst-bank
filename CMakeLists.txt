cmake_minimum_required (VERSION 3.8)
project(worst)

set( CMAKE_BUILD_TYPE debug )
set( CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -m64 -std=c17  -Og -g -Wall -Wextra -Wno-unused-variable " )
set( MEMORYCHECK_COMMAND_OPTIONS "--trace-children=yes --leak-check=full" )

file(GLOB worst_src
  "src/*.h"
  "src/*.c"
  )

add_executable(worst ${worst_src})
# target_include_directories(worst PRIVATE "include")

add_custom_target(run
  COMMAND worst
  DEPENDS worst
  WORKING_DIRECTORY ${CMAKE_PROJECT_DIR}
  )