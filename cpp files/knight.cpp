#include "../headers/knight.h"

knight::knight(int player) : chessPiece(player) {

    this->name = 'Q';
}

void knight::setPossibleMoves(int **board) {

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

    this->possibleMoves.clear();

    int compare;

    if (this->player == 2)
        compare = 1;
    else
        compare = 2;

    if (this->currPos.RowPos + 2 < 4 && this->currPos.ColPos + 1 < 4) {
        if (board[this->currPos.RowPos + 2][this->currPos.ColPos + 1] == 0 ||
            board[this->currPos.RowPos + 2][this->currPos.ColPos + 1] == compare)
            this->possibleMoves.push_back(((this->currPos.RowPos + 2) * 10) + this->currPos.ColPos + 1);
    }
    if (this->currPos.RowPos + 2 < 4 && this->currPos.ColPos - 1 >= 0) {
        if (board[this->currPos.RowPos + 2][this->currPos.ColPos - 1] == 0 ||
            board[this->currPos.RowPos + 2][this->currPos.ColPos - 1] == compare)
            this->possibleMoves.push_back(((this->currPos.RowPos + 2) * 10) + this->currPos.ColPos - 1);
    }
    if (this->currPos.RowPos - 2 >= 0 && this->currPos.ColPos + 1 < 4) {
        if (board[this->currPos.RowPos - 2][this->currPos.ColPos + 1] == 0 ||
            board[this->currPos.RowPos - 2][this->currPos.ColPos + 1] == compare)
            this->possibleMoves.push_back(((this->currPos.RowPos - 2) * 10) + this->currPos.ColPos + 1);
    }
    if (this->currPos.RowPos - 2 >= 0 && this->currPos.ColPos - 1 >= 0) {
        if (board[this->currPos.RowPos - 2][this->currPos.ColPos - 1] == 0 ||
            board[this->currPos.RowPos - 2][this->currPos.ColPos - 1] == compare)
            this->possibleMoves.push_back(((this->currPos.RowPos - 2) * 10) + this->currPos.ColPos - 1);
    }
    if (this->currPos.RowPos + 1 < 4 && this->currPos.ColPos + 2 < 4) {
        if (board[this->currPos.RowPos + 1][this->currPos.ColPos + 2] == 0 ||
            board[this->currPos.RowPos + 1][this->currPos.ColPos + 2] == compare)
            this->possibleMoves.push_back(((this->currPos.RowPos + 1) * 10) + this->currPos.ColPos + 2);
    }
    if (this->currPos.RowPos + 1 < 4 && this->currPos.ColPos - 2 >= 0) {
        if (board[this->currPos.RowPos + 1][this->currPos.ColPos - 2] == 0 ||
            board[this->currPos.RowPos + 1][this->currPos.ColPos - 2] == compare)
            this->possibleMoves.push_back(((this->currPos.RowPos + 1) * 10) + this->currPos.ColPos - 2);
    }
    if (this->currPos.RowPos - 1 >= 0 && this->currPos.ColPos + 2 < 4) {
        if (board[this->currPos.RowPos - 1][this->currPos.ColPos + 2] == 0 ||
            board[this->currPos.RowPos - 1][this->currPos.ColPos + 2] == compare)
            this->possibleMoves.push_back(((this->currPos.RowPos - 1) * 10) + this->currPos.ColPos + 2);
    }
    if (this->currPos.RowPos - 1 >= 0 && this->currPos.ColPos - 2 >= 0) {
        if (board[this->currPos.RowPos - 1][this->currPos.ColPos - 2] == 0 ||
            board[this->currPos.RowPos - 1][this->currPos.ColPos - 2] == compare)
            this->possibleMoves.push_back(((this->currPos.RowPos - 1) * 10) + this->currPos.ColPos - 2);
    }
}
