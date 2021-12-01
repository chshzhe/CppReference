#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    char str[4];
    cin >> str;
    for (int i = 0; i < 4; ++i)
        cout << char(str[i] + 29);
    cout << endl;
    return 0;
}