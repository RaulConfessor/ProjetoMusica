cmake_minimum_required(VERSION 3.24)
project(Music)

set(CMAKE_CXX_STANDARD 17)

add_executable(Music main.cpp Musica.hpp Musica.cpp GerenciadorMusicas.cpp GerenciadorMusicas.hpp)
