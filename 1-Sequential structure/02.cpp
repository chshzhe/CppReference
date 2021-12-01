#include <iomanip>
#include <iostream>
using namespace std;

int main()
{
    int x1, x2, x3, x4;
    cin >> x1 >> x2 >> x3 >> x4;
    double average = double(x1 + x2 + x3 + x4) / 4;
    cout << fixed << setprecision(2) << average << endl;
    return 0;
}