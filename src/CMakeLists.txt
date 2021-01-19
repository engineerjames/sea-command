# Hello-world style CMakeLists.txt for now

add_executable(main main.cpp)

target_compile_options(main PRIVATE ${CXX_FLAGS})
target_include_directories(main PRIVATE ${CMAKE_CURRENT_SOURCE_DIR})