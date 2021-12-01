#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int m, n, cnt = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
    {
        bool flag = true;
        if (i == 1)
            flag = false;
        for (int j = 2; j <= sqrt(i); j++)
            if (i % j == 0)
            {
                flag = false;
                break;
            }
        if (flag)
            cnt++;
    }
    cout << cnt << endl;
    return 0;
}