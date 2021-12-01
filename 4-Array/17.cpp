#include <iostream>
#include <cctype>
#include <cstring>
using namespace std;

int main()
{
    char ch, op;
    int num1 = 0, num2 = 0, ans;
    bool isFirst = true;
    string str;
    getline(cin, str);
    for (int i = 0; i <= str.length(); i++)
        if (isdigit(str[i]))
        {
            if (isFirst)
                num1 = num1 * 10 + str[i] - '0';
            else
                num2 = num2 * 10 + str[i] - '0';
        }
        else if (isFirst)
        {
            op = str[i];
            isFirst = false;
        }
    switch (op)
    {
    case '+':
        ans = num1 + num2;
        break;
    case '-':
        ans = num1 - num2;
        break;
    case '*':
        ans = num1 * num2;
        break;
    case '/':
        ans = num1 / num2;
        break;
    }
    cout << str << '=' << ans << endl;
    return 0;
}