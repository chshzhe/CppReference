#include <iostream>
using namespace std;

int main()
{
    int time;
    int n;
    cin >> time;
    cin >> n;
    int a = time / 10000;
    int b = time % 10000 / 100;
    int c = time % 100;
    int m[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
    {
        m[2] = 29;
    }
    while (n > 0)
    {
        if (c < m[b])
        {
            c++;
            n--;
        }
        else
        {
            if (b < 12)
            {
                c = 1;
                b++;
                n--;
            }
            else
            {
                c = 1;
                b = 1;
                a++;
                n--;
                if (a % 4 == 0 && a % 100 != 0 || a % 400 == 0)
                {
                    m[2] = 29;
                }
                else
                    m[2] = 28;
            }
        }
    }
    if (a > 9999)
        cout << "out of limit!";
    else
    {
        char t[8];
        t[0] = a / 1000 + '0';
        a %= 1000;
        t[1] = a / 100 + '0';
        a %= 100;
        t[2] = a / 10 + '0';
        a %= 10;
        t[3] = a + '0';
        t[4] = b / 10 + '0';
        t[5] = b % 10 + '0';
        t[6] = c / 10 + '0';
        t[7] = c % 10 + '0';
        for (int i = 0; i <= 7; i++)
        {
            cout << t[i];
        }
    }
    return 0;
}