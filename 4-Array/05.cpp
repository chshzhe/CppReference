#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int x, num = 0;
    int a[1001];
    while (cin >> x)
    {

        bool flag = true;
        for (int i = 0; i < num; i++)
            if (a[i] == x)
            {
                flag = false;
                break;
            }
        if (flag)
            a[num++] = x;
    }
    cout << num << ' ';
    for (int i = 0; i < num; i++)
    {
        cout << a[i] << ' ';
    }
    cout << endl;
    return 0;
}
