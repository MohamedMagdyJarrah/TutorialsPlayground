# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\timerTest_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\timerTest_autogen.dir\\ParseCache.txt"
  "timerTest_autogen"
  )
endif()
