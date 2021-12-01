#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    const double pi = 3.14;
    int r;
    cin >> r;
    cout << "半径为" << r << "的球体积为" << fixed << setprecision(1) << double(4) / 3 * pi * r * r * r << endl;
    cout << "半径为" << r << "的球体表面积为" << fixed << setprecision(1) << 4 * pi * r * r << endl;
}