cmake_minimum_required(VERSION 3.6)
project(neurons)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

enable_testing()
add_subdirectory(gtest)
include_directories(${gtest_SOURCE_DIR}/include${gtest_SOURCE_FILES})


set(SOURCE_FILES main.cpp Neuron.cpp Neuron.h Network.cpp Network.h)
add_executable(neurons ${SOURCE_FILES})

add_executable(basic_test Neuron.cpp Network.cpp basic_test.cpp)

target_link_libraries(basic_test gtest gtest_main)
add_test(basic_test basic_test)