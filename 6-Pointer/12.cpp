#include <iostream>
#include <cstring>
using namespace std;

// 写出两个函数的声明
char *&funA(char **&);
char *funB(char *, char **);
int main()
{
    char a[100], b[100];
    for (int i = 0; i < 3; ++i)
    {
        char **p;
        cin >> a;
        funA(p) = a;
        cout << funB(b, p) << endl;
    }
    return 0;
}

// 写出两个函数的定义
char *&funA(char **&p)
{
    p = new char *;
    return *p;
}
char *funB(char *b, char **p)
{
    b = *p;
    delete p;
    for (int i = 0; i < 98; i++)
        if (b[i] >= 'a' && b[i] <= 'z')
            b[i] = b[i] - 'a' + 'A';

    return b;
}