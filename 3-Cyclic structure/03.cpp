#include <iostream>
using namespace std;

int main()
{
    long long a = 0, b = 1, c, n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << endl;
}