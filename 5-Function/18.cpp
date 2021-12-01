#include <iostream>
using namespace std;
int length1, length2;
int getLength(char a[])
{
    int i = 0;
    while (a[i])
        i++;
    return i;
}
int mystrstr(char a[], char b[])
{
    for (int i = 0; i < length1; i++)
        if (a[i] == b[0])
        {
            bool flag = true;
            for (int j = 0; j < length2; j++)
                if ((i + j >= length1) || (a[i + j] != b[j]))
                {
                    flag = false;
                    break;
                }
            if (flag)
                return i;
        };
    return -1;
}
int main()
{
    char a[81], b[81];
    cin >> a;
    cin >> b;
    length1 = getLength(a);
    length2 = getLength(b);
    cout
        << mystrstr(a, b);
    return 0;
}
