#include <iostream>
using namespace std;

int fib()
{
    static int n = 0;
    n++;
    if (n == 0)
        return 0;
    if (n == 1)
        return 1;
    if (n > 1)
    {
        int *a = new int[n + 1];
        a[0] = 0;
        a[1] = 1;
        int i;
        for (i = 2; i <= n; ++i)
            a[i] = a[i - 1] + a[i - 2];
        return a[n];
    }
}
