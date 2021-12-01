#include <iostream>
using namespace std;
int fun(int n)
{
    if (n == 1)
        return 10;
    else
        return fun(n - 1) + 2;
}
int main()
{
    int n;
    cin >> n;
    cout << fun(n);
    return 0;
}
