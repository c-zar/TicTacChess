#ifndef CHESS_ROOK_H
#define CHESS_ROOK_H

#include "chessPiece.h"

class rook : public chessPiece {
private:
    char name;
public:
    rook(int player);

    void setPossibleMoves(int **board) override;
};


#endif //CHESS_ROOK_H
