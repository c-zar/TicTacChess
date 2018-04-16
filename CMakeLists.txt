cmake_minimum_required(VERSION 3.9)
project(chess)

set(CMAKE_CXX_STANDARD 11)

add_executable(chess chess.cpp chess.h chessPiece.cpp chessPiece.h game.cpp game.h player.cpp player.h)