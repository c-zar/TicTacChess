#ifndef CHESS_BISHOP_H
#define CHESS_BISHOP_H

#include "chessPiece.h"


class bishop : public chessPiece {
private:
    char name;
public:
    bishop(int player);;

    void setPossibleMoves(int **board) override;
};


#endif //CHESS_BISHOP_H
