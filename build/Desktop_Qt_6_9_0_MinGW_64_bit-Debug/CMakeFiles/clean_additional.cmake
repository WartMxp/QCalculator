# Additional clean files
cmake_minimum_required(VERSION 3.16)

if("${CONFIG}" STREQUAL "" OR "${CONFIG}" STREQUAL "Debug")
  file(REMOVE_RECURSE
  "CMakeFiles\\QCalculator_autogen.dir\\AutogenUsed.txt"
  "CMakeFiles\\QCalculator_autogen.dir\\ParseCache.txt"
  "QCalculator_autogen"
  )
endif()
