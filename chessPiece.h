#ifndef CHESS_CHESSPIECE_H
#define CHESS_CHESSPIECE_H
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


#endif //CHESS_CHESSPIECE_H
