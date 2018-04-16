#include "game.h"

game::game(string p1name, string p2name) {
    this->p1 = new player(p1name, 1);
    this->p2 = new player(p2name, 2);

    this->board = new string*[4];
    for(int i = 0; i < 4; i++)
        this->board[i] = new string[4];
}
