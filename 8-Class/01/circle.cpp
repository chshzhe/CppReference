#include <iostream>
using namespace std;
#include "circle.h"

void Circle::getO(int &xx, int &yy)
{
    xx = x;
    yy = y;
}
int Circle::getR()
{
    return r;
}
void Circle::move(int xx, int yy)
{
    x += xx;
    y += yy;
}
void Circle::setR(int rr)
{
    r = rr;
}
Circle::~Circle() {}