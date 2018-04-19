#include "../headers/player.h"

player::player(string name, int number) {

    this->name = name;
    this->_pawn = new pawn(number);
    this->_rook = new rook(number);
    this->_bishop = new bishop(number);
    this->_knight = new knight(number);
}

bool player::move(char piece, position newPos, int **board) {

    if (piece == 'P') {
        return this->_pawn->move(newPos);
    }
    if (piece == 'R') {
        return this->_rook->move(newPos);
    }
    if (piece == 'B') {
        return this->_bishop->move(newPos);
    }
    if (piece == 'Q') {
        return this->_knight->move(newPos);
    }
    return false;
}

chessPiece *player::getPiece(char piece) {

    if (piece == 'P') {
        return this->_pawn;
    }
    if (piece == 'R') {
        return this->_rook;
    }
    if (piece == 'B') {
        return this->_bishop;
    }
    if (piece == 'Q') {
        return this->_knight;
    }
}


