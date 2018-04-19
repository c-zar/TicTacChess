#include "../headers/pawn.h"

pawn::pawn(int player) : chessPiece(player) {

    this->name = 'P';
    this->direction = player;
}

void pawn::setPossibleMoves(int **board) {

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

    if (this->currPos.colPos == 0) {

        this->direction = 2;

        if (board[this->currPos.rowPos][this->currPos.colPos + 1] == 0)
            this->possibleMoves.push_back((this->currPos.rowPos * 10) + this->currPos.colPos + 1);
        if (this->currPos.rowPos - 1 >= 0 && this->currPos.colPos + 1 < 4) {
            if (board[this->currPos.rowPos - 1][this->currPos.colPos + 1] == compare)
                this->possibleMoves.push_back(((this->currPos.rowPos - 1) * 10) + this->currPos.colPos + 1);
        }
        if (this->currPos.rowPos + 1 < 4 && this->currPos.colPos + 1 < 4) {
            if (board[this->currPos.rowPos + 1][this->currPos.colPos + 1] == compare)
                this->possibleMoves.push_back(((this->currPos.rowPos + 1) * 10) + this->currPos.colPos + 1);
        }
    } else if (this->currPos.colPos == 3) {

        this->direction = 1;

        if (board[this->currPos.rowPos][this->currPos.colPos - 1] == 0)
            this->possibleMoves.push_back((this->currPos.rowPos * 10) + this->currPos.colPos - 1);
        if (this->currPos.rowPos - 1 >= 0 && this->currPos.colPos - 1 >= 0) {
            if (board[this->currPos.rowPos - 1][this->currPos.colPos - 1] == compare)
                this->possibleMoves.push_back(((this->currPos.rowPos - 1) * 10) + this->currPos.colPos - 1);
        }
        if (this->currPos.rowPos + 1 < 4 && this->currPos.colPos - 1 >= 0) {
            if (board[this->currPos.rowPos + 1][this->currPos.colPos - 1] == compare)
                this->possibleMoves.push_back(((this->currPos.rowPos + 1) * 10) + this->currPos.colPos - 1);
        }
    } else {

        if (this->direction == 2) {
            if (board[this->currPos.rowPos][this->currPos.colPos + 1] == 0)
                this->possibleMoves.push_back((this->currPos.rowPos * 10) + this->currPos.colPos + 1);
            if (this->currPos.rowPos - 1 >= 0 && this->currPos.colPos + 1 < 4) {
                if (board[this->currPos.rowPos - 1][this->currPos.colPos + 1] == compare)
                    this->possibleMoves.push_back(((this->currPos.rowPos - 1) * 10) + this->currPos.colPos + 1);
            }
            if (this->currPos.rowPos + 1 < 4 && this->currPos.colPos + 1 < 4) {
                if (board[this->currPos.rowPos + 1][this->currPos.colPos + 1] == compare)
                    this->possibleMoves.push_back(((this->currPos.rowPos + 1) * 10) + this->currPos.colPos + 1);
            }
        } else {
            if (board[this->currPos.rowPos][this->currPos.colPos - 1] == 0)
                this->possibleMoves.push_back((this->currPos.rowPos * 10) + this->currPos.colPos - 1);
            if (this->currPos.rowPos - 1 >= 0 && this->currPos.colPos - 1 >= 0) {
                if (board[this->currPos.rowPos - 1][this->currPos.colPos - 1] == compare)
                    this->possibleMoves.push_back(((this->currPos.rowPos - 1) * 10) + this->currPos.colPos - 1);
            }
            if (this->currPos.rowPos + 1 < 4 && this->currPos.colPos - 1 >= 0) {
                if (board[this->currPos.rowPos + 1][this->currPos.colPos - 1] == compare)
                    this->possibleMoves.push_back(((this->currPos.rowPos + 1) * 10) + this->currPos.colPos - 1);
            }
        }
    }
}

void pawn::del() {

    this->direction = player;
}