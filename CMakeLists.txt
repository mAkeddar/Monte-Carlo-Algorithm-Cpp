cmake_minimum_required(VERSION 3.17)
project(Project_Monte_carlo)


set(CMAKE_CXX_STANDARD 14)


include_directories(Modules)
add_subdirectory(Test)
add_subdirectory(Modules)
set(SOURCE_FILES main.cpp)
add_executable(Project_Monte_carlo ${SOURCE_FILES})

target_link_libraries(Project_Monte_carlo Modules)