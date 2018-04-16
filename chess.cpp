#include "chess.h"
#include "chessPiece.h"
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