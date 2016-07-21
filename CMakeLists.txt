project(HackerRank)

cmake_minimum_required(VERSION 2.8)
SET(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wall -Wextra -Werror -pipe -O2 -std=c++11")

add_subdirectory(tutorials)
add_subdirectory(contests)
add_subdirectory(algorithms)
