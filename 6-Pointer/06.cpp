#include <cstring>
#include <iostream>
using namespace std;
char *julian(int year, int day)
{
    bool leap;
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    {
        leap = true;
    }
    else
        leap = false;
    if ((leap && (day > 366 || day < 1)) || (!leap && (day > 365 || day < 1)))
        return NULL;
    int month_day[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 12, 0};
    if (leap)
        month_day[2] += 1;
    int month;
    for (month = 1; month < 12; month++)
        if (day - month_day[month] > 0)
            day -= month_day[month];
        else
            break;
    string month_str[] = {
        " ",
        "Jan",
        "Feb",
        "Mar",
        "Apr",
        "May",
        "Jun",
        "Jul",
        "Aug",
        "Sep",
        "Oct",
        "Nov",
        "Dec",
        };
    char *output;

    output = new char[10];
    output[0] = month_str[month][0];
    output[1] = month_str[month][1];
    output[2] = month_str[month][2];
    output[3] = ' ';

    output[4] = char(day / 10 + '0');
    output[5] = char(day % 10 + '0');
    output[6] = '\0';

    return output;
}
int main()
{
    int year, day;
    char *res;
    cin >> year >> day;
    res = julian(year, day);
    cout << res << endl;
    delete[] res;
    return 0;
}
