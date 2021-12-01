#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    cin >> a >> b;
    if ((a < 11 && b < 11) || (a >= 10 && b >= 10 && abs(a - b) <= 1))
        cout << "In progress" << endl;
    else if ((a == 11 && a - b >= 2) || (a >= 12 && a - b == 2))
        cout << "A win" << endl;
    else if ((b == 11 && b - a >= 2) || (b >= 12 && b - a == 2))
        cout
            << "B win" << endl;
    else
        cout << "Illegal" << endl;
    return 0;
}