add_executable(main foo.cpp main.cpp)

target_link_libraries(main eigen)
add_dependencies(main eigen)
