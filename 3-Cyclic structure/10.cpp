#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int cnt = 0;
    bool flag = true;
    while (n > 1)
    {
        if (n % 2 == 0)
        {
            n /= 2;
            cnt++;
        }
        else if (n % 3 == 0)
        {
            n = n / 3 * 2;
            cnt++;
        }
        else if (n % 5 == 0)
        {
            n = n / 5 * 4;
            cnt++;
        }
        else
        {
            flag = false;
            break;
        }
    }
    if (flag)
        cout << cnt << endl;
    else
        cout << "-1" << endl;
    return 0;
}