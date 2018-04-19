#include "../headers/bishop.h"

bishop::bishop(int player) : chessPiece(player) {

    this->name = 'B';
}

void bishop::setPossibleMoves(int **board) {

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

    for (int i = 0; i < 3; ++i) {

        if (this->currPos.rowPos + i < 4 && this->currPos.colPos + i < 4) {
            if (board[this->currPos.rowPos + i][this->currPos.colPos + i] == 0 ||
                board[this->currPos.rowPos + i][this->currPos.colPos + i] == compare)
                possibleMoves.push_back(((currPos.rowPos + i) * 10) + (currPos.colPos + i));
        }
        if (this->currPos.rowPos - i >= 0 && this->currPos.colPos + i < 4) {
            if (board[this->currPos.rowPos - i][this->currPos.colPos + i] == 0 ||
                board[this->currPos.rowPos - i][this->currPos.colPos + i] == compare)
                possibleMoves.push_back(((currPos.rowPos - i) * 10) + (currPos.colPos + i));
        }
        if (this->currPos.rowPos - i >= 0 && this->currPos.colPos - i >= 0) {
            if (board[this->currPos.rowPos - i][this->currPos.colPos - i] == 0 ||
                board[this->currPos.rowPos - i][this->currPos.colPos - i] == compare)
                possibleMoves.push_back(((currPos.rowPos - i) * 10) + (currPos.colPos - i));
        }
        if (this->currPos.rowPos + i < 4 && this->currPos.colPos - i >= 0) {
            if (board[this->currPos.rowPos + i][this->currPos.colPos - i] == 0 ||
                board[this->currPos.rowPos + i][this->currPos.colPos - i] == compare)
                possibleMoves.push_back(((currPos.rowPos + i) * 10) + (currPos.colPos - i));
        }
    }
}
