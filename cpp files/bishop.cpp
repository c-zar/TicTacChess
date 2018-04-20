#include "../headers/bishop.h"

bishop::bishop(int player) : chessPiece(player) {

    this->name = 'B';
}

void bishop::setPossibleMoves(int **board) {

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

    while (this->currPos.RowPos + i < 4 && this->currPos.ColPos + i < 4) {
        while (board[this->currPos.RowPos + i][this->currPos.ColPos + i] == 0) {
            possibleMoves.push_back(((currPos.RowPos + i) * 10) + (currPos.ColPos + i));
            i++;
        }
        if (board[this->currPos.RowPos + i][this->currPos.ColPos + i] == compare) {
            possibleMoves.push_back(((currPos.RowPos + i) * 10) + (currPos.ColPos + i));
            break;
        }
    }

    i = 1;

    while (this->currPos.RowPos - i >= 0 && this->currPos.ColPos + i < 4) {
        while (board[this->currPos.RowPos - i][this->currPos.ColPos + i] == 0) {
            possibleMoves.push_back(((currPos.RowPos - i) * 10) + (currPos.ColPos + i));
            i++;
        }
        if (board[this->currPos.RowPos - i][this->currPos.ColPos + i] == compare) {
            possibleMoves.push_back(((currPos.RowPos - i) * 10) + (currPos.ColPos + i));
            break;
        }
    }

    i = 1;

    while (this->currPos.RowPos - i >= 0 && this->currPos.ColPos - i >= 0) {
        while (board[this->currPos.RowPos - i][this->currPos.ColPos - i] == 0) {
            possibleMoves.push_back(((currPos.RowPos - i) * 10) + (currPos.ColPos - i));
            i++;
        }
        if (board[this->currPos.RowPos - i][this->currPos.ColPos - i] == compare) {
            possibleMoves.push_back(((currPos.RowPos - i) * 10) + (currPos.ColPos - i));
            break;
        }
    }

    i = 1;

    while (this->currPos.RowPos + i < 4 && this->currPos.ColPos - i >= 0) {
        while (board[this->currPos.RowPos + i][this->currPos.ColPos - i] == 0) {
            possibleMoves.push_back(((currPos.RowPos + i) * 10) + (currPos.ColPos - i));
            i++;
        }
        if (board[this->currPos.RowPos + i][this->currPos.ColPos - i] == compare) {
            possibleMoves.push_back(((currPos.RowPos + i) * 10) + (currPos.ColPos - i));
            break;
        }
    }
}
