#ifndef CHESS_GAME_H
#define CHESS_GAME_H

#include <string>
#include <vector>
#include "player.h"

using namespace std;

class game {
private:
    int turn;
    player p1, p2;
    int **boardCopy;
    chessPiece ***chessBoard;
public:
    game(string p1name, string p2name);

    bool move(char pieceName, position newPos, int **board);

    bool win();

    void printBoard();
};


#endif //CHESS_GAME_H
