#include <iostream>
using namespace std;

int main()
{
    double a, b;
    cin >> a >> b;
    if (int(a) != a || int(b) != b || int(a + b) != a + b)
        cout << "error" << endl;
    else
        cout << a + b << endl;
    return 0;
}