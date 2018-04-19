#ifndef CHESS_KNGIHT_H
#define CHESS_KNGIHT_H

#include "chessPiece.h"

class knight : public chessPiece {
private:
    char name;
public:
    knight(int player);

    void setPossibleMoves(int **board) override;
};


#endif //CHESS_KNGIHT_H
