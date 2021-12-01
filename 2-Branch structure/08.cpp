#include <cmath>
#include <iostream>
using namespace std;

int main()
{
    double x, y;
    cin >> x >> y;
    double d1 = pow(x - 2, 2) + pow(y - 2, 2);
    double d2 = pow(x - 2, 2) + pow(y + 2, 2);
    double d3 = pow(x + 2, 2) + pow(y - 2, 2);
    double d4 = pow(x + 2, 2) + pow(y + 2, 2);
    if (d1 <= 1 || d2 <= 1 || d3 <= 1 || d4 <= 1)
        cout << "10" << endl;
    else
        cout << "0" << endl;
    return 0;
}