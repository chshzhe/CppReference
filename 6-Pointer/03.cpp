#include <iostream>
#include <cstring>
using namespace std;

bool func(char array[], int len)
{
    //此处填补几行代码 此处4行
    if (len == 0 || len == 1)
        return true;
    if (array[0] == array[len - 1])
        return func(&array[1], len - 2);
    else
        return false;
}

int main()
{
    char ch[20];
    bool result;

    cin >> ch;

    //此处填补几行代码 此处4行
    result = func(ch, strlen(ch));
    if (result)
        cout << "Yes" << endl;
    else
        cout << "No" << endl;

    return 0;
}
