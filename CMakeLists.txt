
cmake_minimum_required(VERSION 3.10)
project(PortfolioCli)
set(CMAKE_CXX_STANDARD 17)
add_executable(app src/main.cpp)
enable_testing()
add_test(NAME run COMMAND app sample)
