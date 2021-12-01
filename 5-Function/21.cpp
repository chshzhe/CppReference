#include <iostream>
#include <cmath>
using namespace std;

/* 
int knapsack(int n, int s[], int v[], int C)
{
    if (n == 0)
        return 0;
    if (C >= s[n - 1])
    {
        int value1 = knapsack(n - 1, s, v, C - s[n - 1]) + v[n - 1];
        int value2 = knapsack(n - 1, s, v, C);
        if (value1 > value2)
            return value1;
        else
            return value2;
    }
    else
        return knapsack(n - 1, s, v, C);
} 
*/

int knapsack(int n, int s[], int v[], int C)
{
    int dp[C + 1] = {0};
    for (int i = 1; i <= n; i++)
        for (int j = C; j >= s[i - 1]; j--)
            dp[j] = max(dp[j], dp[j - s[i - 1]] + v[i - 1]);
    return dp[C];
}
int main()
{
    int n, C, s[2000], v[2000];
    cin >> C >> n;

    for (int i = 0; i < n; i++)
        cin >> s[i] >> v[i];

    cout << knapsack(n, s, v, C) << endl;
    return 0;
}
