#include <iostream>
using namespace std;

int main()
{
    int n, x;
    int a[103];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    for (int i = n - 1; i > 0; i--)
    {
        int max = a[i], maxn = i;
        for (int j = 0; j < i; j++)
        {
            if (a[j] > max)
            {
                max = a[j];
                maxn = j;
            }
        }
        int temp = a[i];
        a[i] = a[maxn];
        a[maxn] = temp;
    }
    for (int i = 0; i < n; i++)
        cout << a[i] << ' ';
    cout << endl;
    return 0;
}