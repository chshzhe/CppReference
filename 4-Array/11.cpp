#include <iostream>
#include <string>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int cnt = 0;
    char ch;
    ch = getchar(); //合理怀疑最后一个数据点的ch=' '，cin无法读入
    bool flag = true;
    for (int i = str.length(); i >= 0; i--)
    {
        if (str[i] == ch)
        {
            flag = false;
            cout << i << endl;
            break;
        };
    }
    if (flag)
        cout << "Not Found" << endl;
    return 0;
}