#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n)
{
    if (n == 1)
        return false;
    else
    {
        for (int i = 2; i <= sqrt(n); i++)
            if (n % i == 0)
                return false;
        return true;
    }
}

int main()
{
    int m, n, count = 0;
    cin >> m >> n;
    for (int i = m; i <= n; i++)
        if (isPrime(i))
            count++;
    cout << count << endl;
    return 0;
}
