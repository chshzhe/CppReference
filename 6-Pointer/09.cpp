#include <iostream>
#include <cstring>
using namespace std;

char *strrchr(char *str, char ch)
{
    for (int i = strlen(str); i > 0; i--)
        if (str[i] == ch)
            return (str + i);
    return NULL;
}

int main()
{
    char *p, *result, ch;
    p = new char[51];
    cin.getline(p, 50);
    ch = getchar();
    result = strrchr(p, ch);
    if (result == NULL)
        cout << "no" << endl;
    else
        cout << result << endl;
    return 0;
}