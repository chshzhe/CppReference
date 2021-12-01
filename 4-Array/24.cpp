#include <iostream>
#include <cstring>
#include <cstdlib>
#include <cmath>
using namespace std;

#define N 5
bool change[N + 2][N + 2] = {false};

void change_bit(int m, int n)
{
    change[m][n] = !change[m][n];
    change[m + 1][n] = !change[m + 1][n];
    change[m - 1][n] = !change[m - 1][n];
    change[m][n + 1] = !change[m][n + 1];
    change[m][n - 1] = !change[m][n - 1];
}
int main()
{
    char ch;
    bool origin[N + 2][N + 2] = {false};
    bool isSuccessful = false;
    int min = N * N;
    for (int i = 1; i <= N; i++)
        for (int j = 1; j <= N; j++)
        {
            cin >> ch;
            if (ch == '1')
                origin[i][j] = true;
        }

    for (int i = 0; i < (1 << N); i++)
    {
        memcpy(change, origin, sizeof(origin));
        int cnt = 0;
        int temp = i;
        bool thisisSuccessful = true;
        for (int j = N; j >= 1; j--)
        {
            if (temp % 2 == 1)
            {
                change_bit(1, j);
                cnt++;
            }
            temp /= 2;
        }
        for (int j = 2; j <= N; j++)
            for (int k = 1; k <= N; k++)
            {
                if (change[j - 1][k] == false)
                {
                    change_bit(j, k);
                    cnt++;
                }
            }

        for (int j = 1; j <= N; j++)
        {
            if (change[N][j] == false)
            {
                thisisSuccessful = false;
                break;
            }
        }
        if (thisisSuccessful)
        {
            isSuccessful = true;
            if (min > cnt)
                min = cnt;
        }
    }
    if (isSuccessful)
        cout << min << endl;
    else
        cout << "-1" << endl;
    return 0;
}