#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    bool flag = true;
    string str1, str2;
    getline(cin, str1);
    getline(cin, str2);
    for (int i = 0; i < str1.length(); i++)
        if (str1[i] == str2[0])
        {
            flag = true;
            for (int j = 0; j < str2.length(); j++)
                if ((i + j >= str1.length()) || (str1[i + j] != str2[j]))
                {
                    flag = false;
                    break;
                }
            if (flag)
            {
                cout << i << endl;
                return 0;
            }
        };
    cout << -1 << endl;
    return 0;
}