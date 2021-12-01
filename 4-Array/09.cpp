#include <iostream>
#include<string>
using namespace std;

int main()
{
    int sum = 0;
    string str;
    getline(cin, str);
    for (int i = 0; i <= str.length(); i++)
    {
        if ('0' <= str[i] && str[i] <= '9')
            sum = sum * 10 + (str[i] - '0');
    }
    cout << sum * 2 << endl;
    return 0;
}