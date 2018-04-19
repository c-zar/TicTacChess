#include "../headers/chessPiece.h"

chessPiece::chessPiece(int player) {

    this->player = player;
    this->currPos.rowPos = -1;
    this->currPos.colPos = -1;
}

bool chessPiece::move(position newPos) {

    for (int i = 0; i < this->possibleMoves.size(); i++) {
        if ((this->possibleMoves[i] / 10 == newPos.rowPos) && (this->possibleMoves[i] % 10) == newPos.colPos) {
            this->oldPos = currPos;
            this->currPos = newPos;
            return true;
        }
    }
    return false;
}

int chessPiece::getPlayer() const {

    return this->getPlayer();
}

position chessPiece::getCurrPos() const {

    return this->currPos;
}

position chessPiece::getOldPos() const {

    return this->oldPos;
}

char chessPiece::getName() const {

    return name;
}

void chessPiece::del() {

    this->currPos.rowPos = -1;
    this->currPos.colPos = -1;
}