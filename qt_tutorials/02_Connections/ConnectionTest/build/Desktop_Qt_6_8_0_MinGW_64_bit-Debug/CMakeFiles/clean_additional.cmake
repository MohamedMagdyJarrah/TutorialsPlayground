# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\ConnectionTest_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\ConnectionTest_autogen.dir\\ParseCache.txt"
  "ConnectionTest_autogen"
  )
endif()
