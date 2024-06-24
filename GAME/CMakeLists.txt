cmake_minimum_required(VERSION 3.26)
project(New_folder)

set(CMAKE_CXX_STANDARD 14)

include_directories(.)
include_directories(include)
include_directories(src)

add_executable(New_folder
        include/CLASSES.hpp
        src/AI.cpp
        src/Game.cpp
        src/GameManager.cpp
        src/Player.cpp)
cmake_minimum_required(VERSION 3.14)
project(MyProject)

include(FetchContent)
FetchContent_Declare(
  googletest
  URL https://github.com/google/googletest/archive/release-1.11.0.zip
)
FetchContent_MakeAvailable(googletest)

enable_testing()

add_executable(
  my_test
  test_file.cpp  # Add your test files here
)
target_link_libraries(my_test gtest gtest_main)
add_test(NAME my_test COMMAND my_test)
