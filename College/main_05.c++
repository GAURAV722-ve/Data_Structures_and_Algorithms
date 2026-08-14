#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int n, count = 0;
    cout << "Enter ";
    cin >> n;

    for (int i = 0; i < n; i++)
    {
        int w;
        cin >> w;
        if (w == 'a' || w == 'e' || w == 'i' || w == 'o' || w == 'u' || w == 'A' || w == 'E' || w == 'I' || w == 'O' || w == 'U')
        {
            count = 0;
        }
        else
        {
            count++;
        }
    }
    if (count > 3)
        {
            cout << "YES";
        }else{
            cout << "NO";
        }
    return 0;
}