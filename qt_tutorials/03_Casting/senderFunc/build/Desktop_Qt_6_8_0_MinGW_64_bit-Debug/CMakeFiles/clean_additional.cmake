# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\senderFunc_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\senderFunc_autogen.dir\\ParseCache.txt"
  "senderFunc_autogen"
  )
endif()
