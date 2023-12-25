project ("AISD-SORT")

add_executable (AISD-SORT "src/main.cpp"  "algorithm/algorithm.h")

if (CMAKE_VERSION VERSION_GREATER 3.12)
  set_property(TARGET AISD-SORT PROPERTY CXX_STANDARD 20)
endif()