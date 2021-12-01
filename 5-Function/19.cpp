#include <iostream>
using namespace std;

long long quickPow(int n, int k)
{
    if (k == 0)
        return 1;
    else
    {
        if (k % 2 == 1)
            return quickPow(n, k - 1) * n;
        else
        {
            long long temp = quickPow(n, k / 2);
            return temp * temp;
        }
    }
}

int main()
{
    int n, k;
    cin >> n >> k;
    cout << quickPow(n, k);
    return 0;
}
