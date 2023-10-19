cmake_minimum_required(VERSION 3.15)

project(main)

find_package(fmt REQUIRED)
#find_package(doctest REQUIRED)




add_executable(${PROJECT_NAME} 
  src/main.cpp
  src/test.cpp
)


# enable_testing()
# add_test(NAME test COMMAND test.out)

message(STATUS ${doctest_INCLUDE_DIR})

target_link_libraries(${PROJECT_NAME} PRIVATE
  fmt::fmt
  #doctest::doctest
)

