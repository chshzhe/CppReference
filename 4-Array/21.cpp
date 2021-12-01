#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int a[1004];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> x;
    bool find = false;

    int low = 0, high = n, middle = 0;
    while (low < high)
    {
        middle = (low + high) / 2;
        if (x == a[middle])
        {
            int m1, m2;
            int l1 = low, h1 = middle, l2 = middle, h2 = high;
            while (h1 - l1 > 1)
            {
                m1 = (l1 + h1) / 2;
                if (x == a[m1])
                    h1 = m1;
                else
                    l1 = m1;
            }
            while (h2 - l2 > 1)
            {
                m2 = (l2 + h2) / 2;
                if (x == a[m2])
                    l2 = m2;
                else
                    h2 = m2;
            }
            cout << h1 << ' ' << l2 << endl;
            return 0;
        }
        else if (x < a[middle])
            high = middle;
        else if (x > a[middle])
            low = middle + 1;
    }
    cout << "-1 -1" << endl;
    return 0;
}