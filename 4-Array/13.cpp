#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    int n, eng = 0, num = 0, others = 0;
    cin >> n;
    getchar();
    for (int j = 0; j < n; j++)
    {
        string str;
        getline(cin, str);
        for (int i = 0; i <= str.length(); i++)
            if ((str[i] >= 'a' && str[i] <= 'z') || (str[i] >= 'A' && str[i] <= 'Z'))
                eng++;
            else if (str[i] >= '0' && str[i] <= '9')
                num++;
            else if (str[i] != ' ' && str[i] != '\0')
                others++;
    }
    cout << "英文字母：" << eng << endl;
    cout << "数字：" << num << endl;
    cout << "其他字符：" << others << endl;
    return 0;
}