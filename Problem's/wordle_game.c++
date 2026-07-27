#include <iostream>
#include <string>
using namespace std;

int main()
{
    string S, T, M = "";
    cout << "Enter Hidden word (S): ";
    cin >> S;
    cout << "Enter Guess word (T): ";
    cin >> T;

    for (int i = 0; i < 5; i++)
    {
        if (S[i] == T[i])
            M += 'G';
        else
            M += 'B';
    }

    cout << M << endl;

    return 0;
}