#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b, c;
    cin >> a >> b >> c;
    if ((abs(a - c) < b && b < a + c) && (abs(b - c) < a && a < b + c) && (abs(b - a) < c && c < b + a))
    {
        if ((a * a + b * b == c * c) || (b * b + c * c == a * a) || (c * c + a * a == b * b))
            cout << "yes\nyes" << endl;
        else
            cout << "yes\nno" << endl;
    }
    else
        cout << "no" << endl;
    return 0;
}