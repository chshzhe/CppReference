#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n, k;
    bool flag[1002];
    cin >> n >> k;
    for (int i = 1; i <= n; i++)
    {
        flag[i] = true;
    }
    for (int i = 2; i <= k; i++)
    {
        for (int j = 1; j * i <= n; j++)
            flag[j * i] = !flag[j * i];
    }
    for (int i = 1; i <= n; i++)
        if (flag[i])
            cout << i << ' ';
    cout << endl;
    return 0;
}