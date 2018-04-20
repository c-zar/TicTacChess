#include "../headers/game.h"


game::game(string p1name, string p2name) : p1(p1name, 1), p2(p2name, 2) {

    this->chessBoard = new chessPiece **[4];
    for (int i = 0; i < 4; i++) {
        this->chessBoard[i] = new chessPiece *[4];
        for (int j = 0; j < 4; j++) {
            chessBoard[i][j] = nullptr;
        }
    }

    this->boardCopy = new int *[4];
    for (int i = 0; i < 4; i++) {
        this->boardCopy[i] = new int[4];
        for (int j = 0; j < 4; j++) {
            boardCopy[i][j] = 0;
        }
    }

    this->turn = 1;
}

bool game::move(char pieceName, position newPos, int **board) {

    chessPiece *piece;
    if (this->turn == 1) {
        if (p1.move(pieceName, newPos, board)) {
            piece = p1.getPiece(pieceName);
            if (chessBoard[newPos.RowPos][newPos.ColPos] != nullptr) {
                chessBoard[newPos.RowPos][newPos.ColPos]->del();
            }
            chessBoard[newPos.RowPos][newPos.ColPos] = piece;
            boardCopy[newPos.RowPos][newPos.ColPos] = piece->getPlayer();
            chessBoard[piece->getOldPos().RowPos][piece->getOldPos().ColPos] = nullptr;
            boardCopy[piece->getOldPos().RowPos][piece->getOldPos().ColPos] = 0;
            this->turn = 2;
            return true;
        }
    } else {
        if (p2.move(pieceName, newPos, board)) {
            piece = p2.getPiece(pieceName);
            if (chessBoard[newPos.RowPos][newPos.ColPos] != nullptr) {
                chessBoard[newPos.RowPos][newPos.ColPos]->del();
            }
            chessBoard[newPos.RowPos][newPos.ColPos] = piece;
            boardCopy[newPos.RowPos][newPos.ColPos] = piece->getPlayer();
            chessBoard[piece->getOldPos().RowPos][piece->getOldPos().ColPos] = nullptr;
            boardCopy[piece->getOldPos().RowPos][piece->getOldPos().ColPos] = 0;
            this->turn = 1;
            return true;
        }
    }
    return false;
}


void game::printBoard() {

    cout << "   a  b  c  d" << endl;
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ' ';
        for (int j = 0; j < 4; j++) {
            if (chessBoard[i][j] == nullptr)
                cout << "[  ]";
            else
                cout << '[' << this->chessBoard[i][j]->getPlayer() << this->chessBoard[i][j]->getName() << "]";
        }
        cout << '\n';
    }
}

bool game::win() {

    if (this->boardCopy[0][0] > 0 && this->boardCopy[0][0] == this->boardCopy[0][1]
        && this->boardCopy[0][0] == this->boardCopy[0][2]
        && this->boardCopy[0][0] == this->boardCopy[0][3])
        return true;

    if (this->boardCopy[0][0] > 0 && this->boardCopy[0][0] == this->boardCopy[1][1]
        && this->boardCopy[0][0] == this->boardCopy[2][2]
        && this->boardCopy[0][0] == this->boardCopy[3][3])
        return true;

    if (this->boardCopy[0][0] > 0 && this->boardCopy[0][0] == this->boardCopy[1][0]
        && this->boardCopy[0][0] == this->boardCopy[2][0]
        && this->boardCopy[0][0] == this->boardCopy[3][0])
        return true;

    if (this->boardCopy[0][0] > 0 && this->boardCopy[1][0] == this->boardCopy[1][1]
        && this->boardCopy[1][0] == this->boardCopy[1][2]
        && this->boardCopy[1][0] == this->boardCopy[1][3])
        return true;

    if (this->boardCopy[0][0] > 0 && this->boardCopy[2][0] == this->boardCopy[2][1]
        && this->boardCopy[2][0] == this->boardCopy[2][2]
        && this->boardCopy[2][0] == this->boardCopy[2][3])
        return true;

    if (this->boardCopy[0][0] > 0 && this->boardCopy[3][0] == this->boardCopy[3][1]
        && this->boardCopy[3][0] == this->boardCopy[3][2]
        && this->boardCopy[3][0] == this->boardCopy[3][3])
        return true;

    if (this->boardCopy[0][0] > 0 && this->boardCopy[3][0] == this->boardCopy[2][1]
        && this->boardCopy[3][0] == this->boardCopy[1][2]
        && this->boardCopy[3][0] == this->boardCopy[0][3])
        return true;

    if (this->boardCopy[0][0] > 0 && this->boardCopy[0][1] == this->boardCopy[1][1]
        && this->boardCopy[0][1] == this->boardCopy[2][1]
        && this->boardCopy[0][1] == this->boardCopy[3][1])
        return true;

    if (this->boardCopy[0][0] > 0 && this->boardCopy[0][2] == this->boardCopy[1][2]
        && this->boardCopy[0][2] == this->boardCopy[2][2]
        && this->boardCopy[0][2] == this->boardCopy[3][2])
        return true;

    if (this->boardCopy[0][0] > 0 && this->boardCopy[0][3] == this->boardCopy[1][3]
        && this->boardCopy[0][3] == this->boardCopy[2][3]
        && this->boardCopy[0][3] == this->boardCopy[3][3])
        return true;

    return false;
}

