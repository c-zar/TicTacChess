#include "../headers/chessPiece.h"

chessPiece::chessPiece(int player) {

    this->player = player;
    this->currPos.RowPos = -1;
    this->currPos.ColPos = -1;
}

bool chessPiece::move(position newPos) {

    for (int i = 0; i < this->possibleMoves.size(); i++) {
        if ((this->possibleMoves[i] / 10 == newPos.RowPos) && (this->possibleMoves[i] % 10) == newPos.ColPos) {
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

    this->currPos.RowPos = -1;
    this->currPos.ColPos = -1;
}