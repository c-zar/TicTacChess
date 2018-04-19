cmake_minimum_required(VERSION 3.9)
project(chess)

set(CMAKE_CXX_STANDARD 11)

add_executable(chess "cpp files/chess.cpp" headers/chess.h "cpp files/chessPiece.cpp" headers/chessPiece.h "cpp files/game.cpp" headers/game.h "cpp files/player.cpp" headers/player.h "cpp files/pawn.cpp" "headers/pawn.h" "cpp files/rook.cpp" "headers/rook.h" "cpp files/bishop.cpp" "headers/bishop.h" "cpp files/knight.cpp" "headers/knight.h")