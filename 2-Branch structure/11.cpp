#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    double a = (4 * n - m) / 2.0, b = (m - 2 * n) / 2;
    if (int(a) == a && int(b) == b && a >= 0 && b >= 0)
        cout << int(a) << ' ' << int(b) << endl;
    else
        cout << "no solution" << endl;
    return 0;
}