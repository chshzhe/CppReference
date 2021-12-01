#include <iostream>
#include <cmath>
using namespace std;
bool perfectNumber(int n)
{
    int sum = bool(n - 1);
    for (int j = 2; j <= sqrt(n); j++)
        if (n % j == 0)
        {
            sum += j;
            if (j * j != n)
                sum += n / j;
        }
    return (sum == n);
}

int main()
{
    int m, n;
    bool flag = true;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        if (perfectNumber(i))
        {
            cout << i << ' ';
            flag = false;
        }
    }
    if (flag)
        cout << "-1";
    cout << endl;
    return 0;
}