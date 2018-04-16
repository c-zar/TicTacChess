#include "../headers/player.h"

player::player(string name, int number) {
    this->name = name;
    this->_pawn = new pawn(number);
    this->_rook = new rook(number);
    this->_bishop = new bishop(number);
    this->_queen = new queen(number);
}
