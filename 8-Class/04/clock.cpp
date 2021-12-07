#include <iostream>
#include <cstdio>
#include <cmath>
#include "clock.h"
using namespace std;

void classClock::init(int hh, int mm, int ss)
{
    timestamp = hh * 3600 + mm * 60 + ss;
}
void classClock::init(int stamp)
{
    timestamp = stamp;
}
void classClock::output()
{
    printf("%02d:%02d:%02d\n",
           (timestamp / 3600) % 24, (timestamp / 60) % 60, timestamp % 60);
}
int classClock::getTimeStamp()
{
    return timestamp;
}

void calculate(classClock time1, classClock time2)
{
    classClock result;
    result.init(abs(time1.getTimeStamp() - time2.getTimeStamp()));
    result.output();
}