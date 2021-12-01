#include <iostream>
#include <cstring>
#include <cmath>
using namespace std;
int findpoint(char str[])
{
    for (int i = 0; i < strlen(str); i++)
        if (str[i] == '.')
            return i;
    return -1;
}
int findstart(char str[])
{
    for (int i = 0; i < strlen(str); i++)
        if ((str[i] >= '1' && str[i] <= '9') || (str[i] == '.'))
            return i;
    return -1;
}
int findend(char str[])
{
    for (int i = strlen(str) - 1; i > 0; i--)
        if ((str[i] >= '1' && str[i] <= '9') || (str[i] == '.'))
            return i;
    return -1;
}
void init(char *str)
{
    for (int i = 0; i < 127; i++)
        str[i] = '0';
}

void add_float(char *a, char *b, char *res)
{
    init(res);
    int point1 = findpoint(a), point2 = findpoint(b);
    int start1 = findstart(a), start2 = findstart(b);
    int end1 = findend(a), end2 = findend(b);
    int max_int_length = max(point1 - start1, point2 - start2) + 1;
    int max_real_length = max(end1 - point1, end2 - point2);
    res[max_int_length] = '.';
    for (int i = max_int_length + max_real_length; i > 0; i--)
    {
        if (res[i] == '.')
            continue;
        int num1, num2, sum;
        if ((end1 - point1 < i - max_int_length) || (i - max_int_length + point1<start1))
            num1 = 0;
        else
            num1 = a[i - max_int_length + point1] - '0';
        if ((end2 - point2 < i - max_int_length) || (i - max_int_length + point2 < start2))
            num2 = 0;
        else
            num2 = b[i - max_int_length + point2] - '0';
        sum = res[i] - '0' + num1 + num2;
        res[i] = char(sum % 10 + '0');
        if (res[i - 1] != '.')
            res[i - 1] = char(int(res[i - 1])) + sum / 10;
        else
            res[i - 2] = char(int(res[i - 2])) + sum / 10;
    }
    //cout << res << endl;
    int start = findstart(res), end = findend(res);
    for (int i = start; i <= end; i++)
        res[i - start] = res[i];
    res[end - start + 1] = '\0';
}

int main()
{
    char num1[128], num2[128], res[128];
    cin >> num1;
    cin >> num2;
    add_float(num1, num2, res);
    cout << res << endl;
    return 0;
}
