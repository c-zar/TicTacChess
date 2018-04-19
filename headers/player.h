#ifndef CHESS_PLAYER_H
#define CHESS_PLAYER_H

#include "chessPiece.h"
#include "pawn.h"
#include "rook.h"
#include "bishop.h"
#include "knight.h"

using namespace std;

class player {
private:
    friend class game;

    string name;
    pawn *_pawn;
    rook *_rook;
    bishop *_bishop;
    knight *_knight;

public:
    player(string name, int number);

    bool move(char piece, position newPos, int **board);

    chessPiece *getPiece(char piece);
};


#endif //CHESS_PLAYER_H
