#include <iostream>
#include <cstring>
using namespace std;
void getDate(int &day, int &month, int &year)
{
    string str, month_str;
    cin >> str;
    if (str[1] == '-')
    {
        day = str[0] - '0';
        year = (str[6] - '0') * 10 + (str[7] - '0');
        month_str = str.substr(2, 3);
    }
    else
    {
        day = (str[0] - '0') * 10 + (str[1] - '0');
        year = (str[7] - '0') * 10 + (str[8] - '0');
        month_str = str.substr(3, 3);
    }
    if (month_str == "Jan")
        month = 1;
    if (month_str == "Feb")
        month = 2;
    if (month_str == "Mar")
        month = 3;
    if (month_str == "Apr")
        month = 4;
    if (month_str == "May")
        month = 5;
    if (month_str == "Jun")
        month = 6;
    if (month_str == "Jul")
        month = 7;
    if (month_str == "Aug")
        month = 8;
    if (month_str == "Sep")
        month = 9;
    if (month_str == "Oct")
        month = 10;
    if (month_str == "Nov")
        month = 11;
    if (month_str == "Dec")
        month = 12;
}
int main()
{
    int day, month, year;
    getDate(day, month, year);
    cout << day << " " << month << " " << year << endl;
    return 0;
}
