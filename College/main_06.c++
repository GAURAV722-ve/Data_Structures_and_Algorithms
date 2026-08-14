#include <iostream>
using namespace std;

int main() {
    int L, B;
    cin >> L >> B;

    int turn = 1;

    while (true) {
        if (turn % 2 != 0) {   // Limak's turn
            if (L < turn) {
                cout << "Bob";
                break;
            }
            L -= turn;
        } else {               // Bob's turn
            if (B < turn) {
                cout << "Limak";
                break;
            }
            B -= turn;
        }
        turn++;
    }

    return 0;
}