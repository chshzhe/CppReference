#include <iostream>
using namespace std;

int main()
{
    int n;
    bool *p;
    cin >> n;
    int survive = n;
    p = new bool[n + 1];
    for (int i = 0; i < n + 1; i++)
        p[i] = true;
    int pos = 0;
    while (survive > 1)
    {
        int cnt = 3;
        while (cnt)
        {
            pos++;
            if (pos > n)
                pos = 1;
            if (p[pos])
                cnt--;
        }
        p[pos] = false;
        survive--;
    }
    for (int i = 1; i < n + 1; i++)
        if (p[i])
        {
            cout << i << endl;
            break;
        }

    delete[] p;
    return 0;
}