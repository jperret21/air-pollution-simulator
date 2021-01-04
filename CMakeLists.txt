cmake_minimum_required(VERSION 3.10)

# set the project name
project(particule_project)

find_package(GTest REQUIRED)


# add the executable
add_executable(main.exe main.cpp Simulator.cpp particles.cpp )
add_executable(test.exe test.cpp particles.cpp )

target_link_libraries(test.exe PUBLIC GTest::GTest GTest::Main )

add_test(AllTestsInTest test.exe)
enable_testing()

gtest_discover_tests(test.exe)
