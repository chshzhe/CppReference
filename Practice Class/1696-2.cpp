#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
#include <cmath>
#include <stack>

using namespace std;

int main()
{
    char s[10];
    stack<char> ch;
    bool flag = true;
    double a, b;
    while (scanf("%s", s) != EOF)
    {

        switch (s[0])
        {
        case '+':
            ch.push('+');
            break;
        case '-':
            ch.push('-');
            break;
        case '*':
            ch.push('*');
            break;
        case '/':
            ch.push('/');
            break;

        default:
            if (flag)
            {
                a = atof(s);
                flag = false;
            }
            else
            {
                b = atof(s);
                char op = ch.top();
                ch.pop();
                switch (op)
                {
                case '+':
                    a = a + b;
                    break;
                case '-':
                    a = a - b;
                    break;
                case '*':
                    a = a * b;
                    break;
                case '/':
                    a = a / b;
                    break;
                }
            }
            break;
        }
        //cout << s << endl;
    }
    printf("%f\n", a);
    return 0;
}