#include <iostream>
#include <cstring>
using namespace std;

int countDay(int year, int month)
{
    int sum = 0;
    int day[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        day[2] += 1;
    for (int i = 1; i <= month - 1; i++)

        sum += day[i];

    sum += 13;
    return sum;
}

int main()
{
    int n, p, sum = 0;
    int a[7];
    memset(a, 0, sizeof(a));

    cin >> n;
    for (int i = 1900; i < 1900 + n; i++)
    {
        for (int j = 1; j <= 12; j++)
        {
            p = countDay(i, j) + sum;
            a[(p + 6) % 7]++;
        }
        if ((i % 4 == 0 && i % 100 != 0) || i % 400 == 0)
            sum += 366;
        else
            sum += 365;
    }
    for (int i = 0; i < 7; i++)
        cout << a[i] << ' ';

    cout << endl;
    return 0;
}