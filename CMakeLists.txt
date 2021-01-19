cmake_minimum_required(VERSION 3.7)

project( sea-command CXX )

list(APPEND CXX_FLAGS -Wall -Wextra -Werror)

add_subdirectory(src)