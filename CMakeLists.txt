cmake_minimum_required(VERSION 3.6)

project(app)

find_package(flatbuffers REQUIRED)

add_executable(testapp app.cpp)

target_link_libraries(testapp flatbuffers::flatbuffers)
