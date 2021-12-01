#include <iostream>
using namespace std;

int main()
{
    char str1[20], str2[20];
    char c, *cp;
    //不得再增加其它任何变量
    cin >> str1;
    cin >> str2;
    for (cp = str1; cp < str1 + 20; cp++)
    {
        if (*cp == '\0' || *(cp - &str1[0] + &str2[0]) == '\0')
            break;
        c = *cp;
        *cp = *(cp - &str1[0] + &str2[0]);
        *(cp - &str1[0] + &str2[0]) = c;
    }
    cout << str1 << endl;
    cout << str2 << endl;
    return 0;
}
