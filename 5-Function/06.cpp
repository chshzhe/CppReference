#include <iostream>
#include <algorithm>
#include <cmath>
using namespace std;

//你的代码
int swim(int a[], int n)
{
    if (n > 4)
    {
        int t1 = 2 * a[0] + a[n - 1] + a[n - 2];
        int t2 = a[0] + 2 * a[1] + a[n - 1];
        return swim(a, n - 2) + min(t1, t2);
    }
    else
    {
        switch (n)
        {
        case 4:
            return min(3 * a[1] + a[0] + a[3], a[2] + a[3] + 2 * a[0] + a[1]);
            break;
        case 3:
            return a[0] + a[1] + a[2];
            break;
        case 2:
            return a[0] + a[1];
            break;
        case 1:
            return a[0];
            break;
        }
    }
}
int main()
{
    int n, p[1000], i;
    cin >> n;
    for (i = 0; i < n; i++)
        cin >> p[i];
    sort(p, p + n);
    cout << swim(p, n);
    return 0;
}
