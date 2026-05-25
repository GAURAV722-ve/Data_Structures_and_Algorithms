#include <iostream>
using namespace std;

int main()
{
    int arr[] = {1, 2, 3, 4, 56, 78, 8};

    int y;
    int found = 0;

    cout << "Enter the number : ";
    cin >> y;

    for (int i = 0; i < sizeof(arr) / sizeof(arr[0]); i++)
    {
        if (y == arr[i])
        {
            found = 1;
            break;
        }
    }

    if (found == 0)
    {
        cout << y << " is not present.";
    }
    else
    {
        cout << y << " is present.";
    }

    return 0;
}