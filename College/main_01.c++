#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr(10);

    cout << "Enter the 10 shots (0 or 1): ";
    for (int i = 0; i < 10; i++) {
        cin >> arr[i];
    }

    int team1 = 0, team2 = 0;

    for (int i = 0; i < 10; i++) {
        if (i % 2 == 0)      // Team 1 shots
            team1 += arr[i];
        else                 // Team 2 shots
            team2 += arr[i];
    }
    cout<<"Output"<<endl;
    if (team1 > team2)
        cout << 1;
    else if (team2 > team1)
        cout << 2;
    else
        cout << 0;

    return 0;
}