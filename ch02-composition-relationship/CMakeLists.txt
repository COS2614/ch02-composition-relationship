cmake_minimum_required(VERSION 3.5)

project(ch02-composition-relationship LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(ch02-composition-relationship main.cpp)

install(TARGETS ch02-composition-relationship
    LIBRARY DESTINATION ${CMAKE_INSTALL_LIBDIR})
