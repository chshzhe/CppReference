#include <iostream>
using namespace std;
long long f(int n)
{
    if (n == 1 || n == 0)
        return 1;
    else
        return n * f(n - 1);
}
int main()
{
    int n, m;
    cin >> n >> m;
    if (n < m)
        cout << "wrong";
    else
        cout << f(n) / f(m) / f(n - m);
    return 0;
}
