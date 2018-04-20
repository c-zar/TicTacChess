#ifndef CHESS_CHESSPIECE_H
#define CHESS_CHESSPIECE_H

#include <string>
#include <vector>
#include <iostream>

using namespace std;

struct position {
    int RowPos;
    int ColPos;
};

class chessPiece {
protected:
    position currPos, oldPos;
    int player;
    char name;
    vector<int> possibleMoves;
public:
    chessPiece(int player);

    bool move(position newPos);

    int getPlayer() const;

    position getCurrPos() const;

    position getOldPos() const;

    char getName() const;

    virtual void del();

    virtual void setPossibleMoves(int **board) = 0;
};


#endif //CHESS_CHESSPIECE_H
