cmake_minimum_required(VERSION 3.6)
project(neurons)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++11")

enable_testing()
add_subdirectory(googletest)
include_directories(${gtest_SOURCE_DIR}/include${gtest_SOURCE_FILES})


set(SOURCE_FILES main.cpp Neuron.cpp Neuron.h Network.cpp Network.h Constant.h)
add_executable(neurons ${SOURCE_FILES})

add_executable(unittest Neuron.cpp Network.cpp unittest.cpp)

target_link_libraries(unittest gtest gtest_main)
add_test(unittest unittest)