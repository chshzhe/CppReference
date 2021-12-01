#include <iostream>
using namespace std;

int main()
{

    int year, month, day, dayNum;
    cin >> year >> month >> day;
    bool illegal = false;
    bool leap = (year % 4 == 0 && year % 100 != 0) || (year % 400 == 0);

    if (month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12)
    {
        if (day <= 31)
            illegal = true;
    }

    if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        if (day <= 30)
            illegal = true;
    }

    if (month == 2)
    {
        if ((leap && day <= 29) || (!leap && day <= 28))
            illegal = true;
    }

    if (illegal)
    {
        dayNum = 31 * (month - 1) + day;
        if (month > 2)
        {
            dayNum -= (4 * month + 23) / 10;
            if (leap)
                dayNum += 1;
        }
        cout << dayNum << endl;
    }
    else
        cout << "Illegal" << endl;
    return 0;
}