#include <iostream>
using namespace std;

int main()
{
    char ch;
    cin >> ch;
    if ('A' <= ch && ch <= 'Z')
        cout << char(ch - 'A' + 'a') << endl;
    else
    {
        if ('a' <= ch && ch <= 'z')
            cout << char(ch - 'a' + 'A') << endl;
        else
            cout << ch << endl;
    }

    return 0;
}