#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    bool flag[130];
    memset(flag, false, sizeof(flag));
    string str;
    getline(cin, str);
    for (int i = 0; i <= str.length(); i++)
        flag[int(str[i])] = true;
    for (int i = 127; i >= 0; i--)
        if (flag[i])
            cout << char(i);
    cout << endl;
    return 0;
}