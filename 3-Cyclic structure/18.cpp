#include <iostream>
using namespace std;

int main()
{
    int n, min_cnt = 100;
    cin >> n;
    for (int i = 0; i <= n; i++)
        for (int j = 0; j <= n / 5; j++)
            for (int k = 0; k <= n / 16; k++)
                for (int l = 0; l <= n / 23; l++)
                    for (int m = 0; m <= n / 33; m++)
                        if ((i + 5 * j + 16 * k + 23 * l + 33 * m == n) && (i + j + k + l + m < min_cnt))
                            min_cnt = i + j + k + l + m;

    int m = n / 33;
    int l = (n - 33 * m) / 23;
    int k = (n - 33 * m - 23 * l) / 16;
    int j = (n - 33 * m - 23 * l - 16 * k) / 5;
    int i = (n - 33 * m - 23 * l - 16 * k - 5 * j);

    cout << min_cnt << ' ' << i + j + k + l + m;
    return 0;
}