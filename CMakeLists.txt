cmake_minimum_required(VERSION 3.18)

project(eigen_template)
set(CMAKE_CXX_STANDARD 17)

add_subdirectory(eigen)

include_directories(src)

add_subdirectory(src)
