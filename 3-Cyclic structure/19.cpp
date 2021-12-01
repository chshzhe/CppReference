#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m, n;
    bool flag = true;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        int sum = bool(i - 1);
        for (int j = 2; j <= sqrt(i); j++)
            if (i % j == 0)
            {
                sum += j;
                if (j * j != i)
                    sum += i / j;
            }
        if (sum == i)
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