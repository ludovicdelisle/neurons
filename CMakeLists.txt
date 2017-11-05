cmake_minimum_required(VERSION 3.2.3)
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

# We first check if Doxygen is present.
find_package(Doxygen)
if(DOXYGEN_FOUND)

    # We then check if the Doxygen.in configuration file exists
    IF(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in)
        message(FATAL_ERROR "Doxygen configuration file is needed to build the documentation:
         - ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in not found.
         - Generate one in the project folder with doxygen -g Doxyfile.in")
    ENDIF(NOT EXISTS ${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in)

    # We configure the doxyfile for make.
    configure_file(${CMAKE_CURRENT_SOURCE_DIR}/Doxyfile.in ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile @ONLY)
    add_custom_target(doc ALL
            ${DOXYGEN_EXECUTABLE} ${CMAKE_CURRENT_BINARY_DIR}/Doxyfile
            WORKING_DIRECTORY ${CMAKE_CURRENT_SOURCE_DIR}
            )
ELSE(DOXYGEN_FOUND)
    message(FATAL_ERROR "Doxygen is needed to build the documentation.")
ENDIF(DOXYGEN_FOUND)
