#ifndef CHESS_GAME_H
#define CHESS_GAME_H
#include <string>
#include <vector>
#include "chessPiece.h"
#include "player.h"
using namespace std;

class game {
private:
    int turn;
    player *p1, *p2;
    string** board;
public:
    game(string p1name, string p2name);
    void move();
    void win();
    void print();
};


#endif //CHESS_GAME_H
