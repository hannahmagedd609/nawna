# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\tst_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\tst_autogen.dir\\ParseCache.txt"
  "tst_autogen"
  )
endif()
