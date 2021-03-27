cmake_minimum_required(VERSION 3.16)
project(iot_mock_tests)

set(CMAKE_CXX_STANDARD 17)

# Disable in-source builds to prevent source tree corruption.
if(" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
  message(FATAL_ERROR "ERROR: In-source builds are not allowed!. You should create a separate directory for build files.")
endif()

add_subdirectory(vendor/Catch2)
add_executable(tests test.cpp ../src/Calculator.cpp)

target_include_directories(tests PRIVATE ../src/)
target_link_libraries(tests PRIVATE Catch2::Catch2WithMain)
