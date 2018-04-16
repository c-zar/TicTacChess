#ifndef CHESS_CHESS_H
#define CHESS_CHESS_H
#include <string>
#include <vector>
using namespace std;

class chessPiece {
public:
    void move();
    void setPossibleMoves();
    vector<string> getPossibleMoves();
};

class pawn: public chessPiece {
private:
    string name;
    int player;
    vector<string> possibleMoves;
public:
    pawn(int player);
    void move();
    void setPossibleMoves();
    vector<string> getPossibleMoves();
};

class rook: public chessPiece {
private:
    string name;
    int player;
    vector<string> possibleMoves;
public:
    rook(int player);
    void move();
    void setPossibleMoves();
    vector<string> getPossibleMoves();
};

class bishop: public chessPiece {
private:
    string name;
    int player;
    vector<string> possibleMoves;
public:
    bishop(int player);
    void move();
    void setPossibleMoves();
    vector<string> getPossibleMoves();
};

class queen: public chessPiece {
private:
    string name;
    int player;
    vector<string> possibleMoves;
public:
    queen(int player);
    void move();
    void setPossibleMoves();
    vector<string> getPossibleMoves();
};

class player {
private:
    string name;
    pawn* _pawn;
    rook* _rook;
    bishop* _bishop;
    queen* _queen;
public:
    player(string name, int number);
    void move();
};

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


#endif //CHESS_CHESS_H
