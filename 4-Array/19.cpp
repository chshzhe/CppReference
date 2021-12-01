#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    for (int i = 0; i <= str.length() / 2; i++)
        cout << str[2 * i + 1];
    cout << endl;
    return 0;
}