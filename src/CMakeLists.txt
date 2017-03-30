set ( SRC_TOP "${CMAKE_SOURCE_DIR}/src/" )

set ( SRC_LIST
  ${SRC_TOP}/main.c
  ${SRC_TOP}/lib.c
)

add_executable ( args-test ${SRC_LIST} )
