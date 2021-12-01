#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>

using namespace std;
char s[10];
double f()
{
    scanf("%s", s);
    switch (s[0])
    {
    case '+':
        return f() + f();
    case '-':
        return f() - f();
    case '*':
        return f() * f();
    case '/':
        return f() / f();
    default:
        return atof(s);
    }
}
int main()
{
    char a[26][26];
    for (int i = 0; i < 26; ++i)
        for (int j = 0; j < 26; ++j)
            a[i][j] = (i + j) % 26 + 'a';
}