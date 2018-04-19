#include "../headers/rook.h"

rook::rook(int player) : chessPiece(player) {

    this->name = 'R';
}

void rook::setPossibleMoves(int **board) {

    if (this->currPos.rowPos == -1) {
        this->possibleMoves.clear();
        for (int i = 0; i < 4; ++i) {
            for (int j = 0; j < 4; ++j) {
                if (board[i][j] == 0)
                    possibleMoves.push_back((i * 10) + j);
            }
        }
        return;
    }

    int compare;

    if (this->player == 2)
        compare = 1;
    else
        compare = 2;

    this->possibleMoves.clear();

    for (int i = 0; i < 4; ++i) {

        if (board[this->currPos.rowPos][i] == 0 || board[this->currPos.rowPos][i] == compare)
            possibleMoves.push_back((currPos.rowPos * 10) + i);

        if (board[i][this->currPos.colPos] == 0 || board[i][this->currPos.colPos] == compare)
            possibleMoves.push_back((i * 10) + currPos.colPos);
    }
}
