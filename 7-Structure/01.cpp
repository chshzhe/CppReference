#include <iostream>

using namespace std;

struct clockT
{
    int hh;
    int mm;
    int ss;
};
void setTime(clockT &c, int hh, int mm, int ss);
void increase(clockT &c);
void showTime(clockT &c);

int main()
{
    int hh, mm, ss;
    clockT c;
    for (int i = 0; i < 2; i++)
    {
        cin >> hh >> mm >> ss;
        setTime(c, hh, mm, ss);
        showTime(c);
        increase(c);
        showTime(c);
    }
    return 0;
}

void setTime(clockT &c, int hh, int mm, int ss)
{
    c.hh = hh;
    c.mm = mm;
    c.ss = ss;
}
void increase(clockT &c)
{
    ++c.ss;
    if (c.ss == 60)
    {
        ++c.mm;
        c.ss = 0;
    }
    if (c.mm == 60)
    {
        ++c.hh;
        c.mm = 0;
    }
    if (c.hh == 24)
    {
        c.hh = 0;
    }
}
void showTime(clockT &c)
{
    printf("%02d:%02d:%02d\n", c.hh, c.mm, c.ss);
}
