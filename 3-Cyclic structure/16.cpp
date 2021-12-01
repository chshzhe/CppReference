#include <iostream>
using namespace std;

int main()
{
    long long a = 1, b = 1, c = 1, n;
    cin >> n;
    for (int i = 2; i <= n; i++)
    {
        c = a + b;
        a = b;
        b = c;
    }
    cout << c << endl;
}