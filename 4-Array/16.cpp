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
            cout << middle << endl;
            return 0;
        }
        else if (x < a[middle])
            high = middle;
        else if (x > a[middle])
            low = middle + 1;
    }
    cout << low << endl;
    return 0;
}