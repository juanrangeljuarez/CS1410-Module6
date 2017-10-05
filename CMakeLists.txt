cmake_minimum_required(VERSION 3.8)
project(Module6)

set(CMAKE_CXX_STANDARD 11)

#set(SOURCE_FILES arrays.cpp)
#set(SOURCE_FILES funcArray.cpp)
#set(SOURCE_FILES arrayAsClassMember.cpp)
#set(SOURCE_FILES inputOutputString.cpp)
set(SOURCE_FILES structArray.cpp)

add_executable(Module6 ${SOURCE_FILES})