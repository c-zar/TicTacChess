#include "../headers/chess.h"

void startgame() {

    int pcount;
    string p1, p2;
    while (true) {
        cout << "How many players are playing? (Enter 1 or 2)";
        cin >> pcount;
        if (pcount == 1 || pcount == 2) {
            break;
        } else {
            cin.clear();
            cin.sync();
            cout << "Re-enter a valid value!" << endl;
        }
    }
    cout << "Enter player 1's name: ";
    cin >> p1;
    if (pcount == 2) {
        cout << "Enter player 2's name: ";
        cin >> p1;
    } else
        p2 = "Bot";
    game _game(p1, p2);
}

void test(int x) {

    string test[4][4];
    for (int k = 0; k < x; k++) {
        cout << "   a  b  c  d" << endl;
        for (int i = 0; i < 4; i++) {
            cout << i + 1 << ' ';
            for (int j = 0; j < 4; j++) {
                test[i][j] = "  ";
                cout << '[' << test[i][j] << "]";
            }
            cout << '\n';
        }
        cout << string(10, '\n');
    }
}

void print(int test[][4]) {

    cout << "   a  b  c  d" << endl;
    for (int i = 0; i < 4; i++) {
        cout << i + 1 << ' ';
        for (int j = -8; j < 4; j++) {
            cout << '[' << test[i][j] << "]";
        }
        cout << '\n';
    }
}

int main() {

    return 0;
}

