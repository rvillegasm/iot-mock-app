cmake_minimum_required(VERSION 3.16)
project(iot_mock)

set(CMAKE_CXX_STANDARD 17)

# Disable in-source builds to prevent source tree corruption.
if(" ${CMAKE_SOURCE_DIR}" STREQUAL " ${CMAKE_BINARY_DIR}")
  message(FATAL_ERROR "ERROR: In-source builds are not allowed!. You should create a separate directory for build files.")
endif()

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_BINARY_DIR}/bin")

set(SOURCES
  src/main.cpp
  src/Calculator.cpp
)

add_executable(iot_mock ${SOURCES})

add_subdirectory(test)