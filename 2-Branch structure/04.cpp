#include <iostream>
using namespace std;

int main()
{
    char str[5];
    cin >> str;
    if (str[0] == str[4] && str[1] == str[3])
        cout << "Yes" << endl;
    else
        cout << "No" << endl;
    return 0;
}