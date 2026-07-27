#include <iostream>
using namespace std;

int main()
{
    double v, a, h;

    cout << "Enter the velocity (m/s): ";
    cin >> v;

    cout << "Enter the acceleration (m/s^2): ";
    cin >> a;

    // Prevent division by zero
    if (a == 0)
    {
        cout << "Acceleration cannot be zero." << endl;
        return 0;
    }

    h = (v * v) / (2 * a);

    cout << "Minimum Height = " << h << " meter" << endl;

    return 0;
}