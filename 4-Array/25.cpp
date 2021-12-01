#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int z;
    cin >> z;
    getchar();
    char a[35][35];
    memset(a, '\0', sizeof(a));
    string str;
    getline(cin, str);
    if (z == 1)
    {
        cout << str << endl;
        return 0;
    }
    int m = 1, n = 1;
    bool isVertical = true;
    for (int i = 0; i < str.length(); i++)
    {
        a[m][n] = str[i];
        if (isVertical)
        {
            m++;
            if (m > z)
            {
                isVertical = false;
                n++;
                m -= 2;
            }
        }
        else
        {
            n++;
            m--;
            if (m < 1)
            {
                isVertical = true;
                m = 2;
                n--;
            }
        }
    }
    for (int i = 1; i <= z; i++)
        for (int j = 1; j <= 35; j++)
            if (a[i][j] != '\0')
                cout << a[i][j];

    cout << endl;
    return 0;
}