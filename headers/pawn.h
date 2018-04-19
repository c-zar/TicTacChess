#ifndef CHESS_PAWN_H
#define CHESS_PAWN_H

#include "chessPiece.h"

class pawn : public chessPiece {
private:
    int direction;
public:
    pawn(int player);

    void setPossibleMoves(int **board) override;

    void del() override;
};

#endif //CHESS_PAWN_H
