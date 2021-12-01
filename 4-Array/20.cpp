#include <iostream>
#include <cstring>
using namespace std;

int main()
{
    string str;
    getline(cin, str);
    int left = 0, right = 0, maxLength = 0;
    int a[129] = {0};
    while (str[right])
    {
        if (a[str[right]] > left)
            left = a[str[right]];
        a[str[right]] = right + 1;
        if (right - left + 1 > maxLength)
            maxLength = right - left + 1;
        right++;
    }
    cout << maxLength << endl;
    return 0;
}