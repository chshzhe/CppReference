#include <iostream>
using namespace std;

int Gcd(int m, int n)
{
    if (m >= 1 && n >= 1 && m <= 10000 && n <= 10000)
    {
        if (m < n)
        {
            int temp = n;
            n = m;
            m = temp;
        }
        if (m % n == 0)
            return n;
        else
            return Gcd(n, m % n);
    }
    else
        return -1;
}
int main()
{
    int m, n;
    cin >> m >> n;

    //你的代码
    int res = Gcd(m, n);
    if (res == -1)
        cout << "Input error!";
    else
        cout << m / res << "/" << n / res;
    return 0;
}
