#include <iostream>

#include "clock.h"
using namespace std;

int main()
{
    int hh, mm, ss;
    classClock time1, time2;
    scanf("%d:%d:%d", &hh, &mm, &ss);
    time1.init(hh, mm, ss);
    scanf("%d:%d:%d", &hh, &mm, &ss);
    time2.init(hh, mm, ss);
    calculate(time1, time2);
    return 0;
}
