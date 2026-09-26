cmake_minimum_required(VERSION 4.0.0)
project(SimulatedAnnealed LANGUAGES CXX)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
set(CMAKE_CXX_EXTENSIONS OFF)


add_library(SimulatedAnnealed STATIC main.cpp)
target_include_directories(SimulatedAnnealed PUBLIC src)
target_include_directories(SimulatedAnnealed PUBLIC data)

include(FetchContent)

FetchContent_Declare(
  googletest
  GIT_REPOSITORY https://github.com/google/googletest.git
  GIT_TAG        v1.15.2
)
FetchContent_MakeAvailable(googletest)
add_library(GTest::GTest INTERFACE IMPORTED)
target_link_libraries(GTest::GTest INTERFACE gtest_main)


enable_testing()

add_subdirectory(src)
add_subdirectory(tests)
