#include "../headers/knight.h"

knight::knight(int player) : chessPiece(player) {

    this->name = 'Q';
}

void knight::setPossibleMoves(int **board) {

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

    this->possibleMoves.clear();

    int compare;

    if (this->player == 2)
        compare = 1;
    else
        compare = 2;

    if (this->currPos.rowPos + 2 < 4 && this->currPos.colPos + 1 < 4) {
        if (board[this->currPos.rowPos + 2][this->currPos.colPos + 1] == 0 ||
            board[this->currPos.rowPos + 2][this->currPos.colPos + 1] == compare)
            this->possibleMoves.push_back(((this->currPos.rowPos + 2) * 10) + this->currPos.colPos + 1);
    }
    if (this->currPos.rowPos + 2 < 4 && this->currPos.colPos - 1 >= 0) {
        if (board[this->currPos.rowPos + 2][this->currPos.colPos - 1] == 0 ||
            board[this->currPos.rowPos + 2][this->currPos.colPos - 1] == compare)
            this->possibleMoves.push_back(((this->currPos.rowPos + 2) * 10) + this->currPos.colPos - 1);
    }
    if (this->currPos.rowPos - 2 >= 0 && this->currPos.colPos + 1 < 4) {
        if (board[this->currPos.rowPos - 2][this->currPos.colPos + 1] == 0 ||
            board[this->currPos.rowPos - 2][this->currPos.colPos + 1] == compare)
            this->possibleMoves.push_back(((this->currPos.rowPos - 2) * 10) + this->currPos.colPos + 1);
    }
    if (this->currPos.rowPos - 2 >= 0 && this->currPos.colPos - 1 >= 0) {
        if (board[this->currPos.rowPos - 2][this->currPos.colPos - 1] == 0 ||
            board[this->currPos.rowPos - 2][this->currPos.colPos - 1] == compare)
            this->possibleMoves.push_back(((this->currPos.rowPos - 2) * 10) + this->currPos.colPos - 1);
    }
    if (this->currPos.rowPos + 1 < 4 && this->currPos.colPos + 2 < 4) {
        if (board[this->currPos.rowPos + 1][this->currPos.colPos + 2] == 0 ||
            board[this->currPos.rowPos + 1][this->currPos.colPos + 2] == compare)
            this->possibleMoves.push_back(((this->currPos.rowPos + 1) * 10) + this->currPos.colPos + 2);
    }
    if (this->currPos.rowPos + 1 < 4 && this->currPos.colPos - 2 >= 0) {
        if (board[this->currPos.rowPos + 1][this->currPos.colPos - 2] == 0 ||
            board[this->currPos.rowPos + 1][this->currPos.colPos - 2] == compare)
            this->possibleMoves.push_back(((this->currPos.rowPos + 1) * 10) + this->currPos.colPos - 2);
    }
    if (this->currPos.rowPos - 1 >= 0 && this->currPos.colPos + 2 < 4) {
        if (board[this->currPos.rowPos - 1][this->currPos.colPos + 2] == 0 ||
            board[this->currPos.rowPos - 1][this->currPos.colPos + 2] == compare)
            this->possibleMoves.push_back(((this->currPos.rowPos - 1) * 10) + this->currPos.colPos + 2);
    }
    if (this->currPos.rowPos - 1 >= 0 && this->currPos.colPos - 2 >= 0) {
        if (board[this->currPos.rowPos - 1][this->currPos.colPos - 2] == 0 ||
            board[this->currPos.rowPos - 1][this->currPos.colPos - 2] == compare)
            this->possibleMoves.push_back(((this->currPos.rowPos - 1) * 10) + this->currPos.colPos - 2);
    }
}
