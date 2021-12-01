#include <iostream>
#include <iomanip>
using namespace std;

int isLeap(int year)
{
    if ((year % 4 == 0 && year % 100 != 0) || year % 400 == 0)
        return 1;
    else
        return 0;
}

void calculate(int n, int &year, int &month, int &day)
{
    int monthday[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    while (n)
    {
        if (isLeap(year))
            monthday[2] = 29;
        else
            monthday[2] = 28;
        if (day < monthday[month])
        {
            day++;
            n--;
        }
        else
        {
            if (month < 12)
            {
                day = 1;
                month++;
                n--;
            }
            else
            {
                day = 1;
                month = 1;
                year++;
                n--;
            }
        }
    }
}
int main()
{
    int a, n, year, month, day;
    cin >> a >> n;
    year = a / 10000;
    month = a % 10000 / 100;
    day = a % 100;
    calculate(n, year, month, day);
    if (year > 9999)
        cout << "out of limit!";
    else
        cout << setfill('0') << setw(4) << year << setfill('0') << setw(2) << month << setfill('0') << setw(2) << day << endl;

    return 0;
}
