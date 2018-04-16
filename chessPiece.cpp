#include "chessPiece.h"

pawn::pawn(int player) {
    this->player=player;
    this->name=to_string(player) + "P";
}

rook::rook(int player) {
    this->player=player;
    this->name=to_string(player) + "R";
}

bishop::bishop(int player) {
    this->player=player;
    this->name=to_string(player) + "B";
}

queen::queen(int player) {
    this->player=player;
    this->name=to_string(player) + "Q";
}
