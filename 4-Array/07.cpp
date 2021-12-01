#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;

int main()
{
    int r;
    cin >> r;
    int a[12][12];
    memset(a, 0, sizeof(a));
    for (int i = 1; i <= r; i++)

        for (int j = 1; j <= i; j++)
        {
            cin >> a[i][j];
            a[i][j] += max(a[i - 1][j - 1], a[i - 1][j]);
        }
    int max = 0;
    for (int i = 1; i <= r; i++)
        if (max < a[r][i])
            max = a[r][i];
    cout << max << endl;

    return 0;
}