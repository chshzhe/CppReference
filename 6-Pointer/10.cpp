#include <iostream>
#include <cstring>
using namespace std;
char result[101];
char *oddstr(char str[])
{
    for (int i = 0; i < strlen(str); i++)
        if (i % 2 == 1)
            result[i / 2] = str[i];
    result[strlen(result)] = '\0';
    return result;
}
int main()
{
    char str[200];
    cin >> str;
    char *odd = oddstr(str);
    cout << odd << endl;
    delete[] odd;
    return 0;
}
