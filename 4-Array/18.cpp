#include <iostream>
using namespace std;

int main()
{
    int n, temp, max = 0, maxn = 0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        int sum = 0;
        for (int j = 0; j < n; j++)
        {
            cin >> temp;
            sum += temp;
        }
        if (sum > max)
        {
            max = sum;
            maxn = i;
        }
    }
    cout << maxn << endl;
    return 0;
}