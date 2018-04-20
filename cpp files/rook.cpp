#include "../headers/rook.h"

rook::rook(int player) : chessPiece(player) {

    this->name = 'R';
}

void rook::setPossibleMoves(int **board) {

    if (this->currPos.RowPos == -1) {
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

    int i = 1;

    while (this->currPos.ColPos + i < 4) {
        while (board[this->currPos.RowPos][this->currPos.ColPos + i] == 0) {
            possibleMoves.push_back((currPos.RowPos * 10) + this->currPos.ColPos + i);
            i++;
        }
        if (board[this->currPos.RowPos][this->currPos.ColPos + i] == compare) {
            possibleMoves.push_back((currPos.RowPos * 10) + this->currPos.ColPos + i);
            break;
        }
    }

    i = 1;

    while (this->currPos.RowPos + i < 4) {
        while (board[this->currPos.RowPos + i][this->currPos.ColPos] == 0) {
            possibleMoves.push_back(((currPos.RowPos + i) * 10) + this->currPos.ColPos);
            i++;
        }
        if (board[this->currPos.RowPos + i][this->currPos.ColPos] == compare) {
            possibleMoves.push_back(((currPos.RowPos + i) * 10) + this->currPos.ColPos);
            break;
        }
    }

    i = 1;

    while (this->currPos.RowPos - i >= 0) {
        while (board[this->currPos.RowPos - i][this->currPos.ColPos] == 0) {
            possibleMoves.push_back(((currPos.RowPos - i) * 10) + this->currPos.ColPos);
            i++;
        }
        if (board[this->currPos.RowPos - i][this->currPos.ColPos] == compare) {
            possibleMoves.push_back(((currPos.RowPos - i) * 10) + this->currPos.ColPos);
            break;
        }
    }

    i = 1;

    while (this->currPos.ColPos - i >= 0) {
        while (board[this->currPos.RowPos][this->currPos.ColPos - i] == 0) {
            possibleMoves.push_back((currPos.RowPos * 10) + this->currPos.ColPos - i);
            i++;
        }
        if (board[this->currPos.RowPos][this->currPos.ColPos - i] == compare) {
            possibleMoves.push_back((currPos.RowPos * 10) + this->currPos.ColPos - i);
            break;
        }
    }
}
