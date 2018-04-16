#include "chess.h"
#include <iostream>
#include <string>

void startgame() {
    int pcount;
    string p1, p2;
    while (true) {
        cout << "How many players are playing? (Enter 1 or 2)";
        cin >> pcount;
        if (pcount == 1 || pcount == 2) {
            break;
        } else{
            cin.clear();
            cin.sync();
            cout << "Re-enter a valid value!" << endl;
        }
    }
        cout << "Enter player 1's name: ";
        cin >> p1;
    if (pcount == 2){
        cout << "Enter player 2's name: ";
        cin >> p1;
    } else
        p2 = "Bot";
    game _game(p1, p2);
}

int main() {
    startgame();
    return 0;
}



// Constructors ========================================================================================================

player::player(string name, int number) {
    this->name = name;
    this->_pawn = new pawn(number);
    this->_rook = new rook(number);
    this->_bishop = new bishop(number);
    this->_queen = new queen(number);
}

game::game(string p1name, string p2name) {
    this->p1 = new player(p1name, 1);
    this->p2 = new player(p2name, 2);

    this->board = new string*[4];
    for(int i = 0; i < 4; i++)
        this->board[i] = new string[4];
}

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

//======================================================================================================================