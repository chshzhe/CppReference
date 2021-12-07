#include <iostream>
#include <cstdio>
#include <cmath>
#include "mystack.h"
using namespace std;

mystack::mystack(int l)
{
    maxLength = l;
    data = new int[maxLength];
    top = 0;
}

bool mystack::isempty()
{
    if (top == 0)
        return true;
    else
        return false;
}

bool mystack::isfull()
{
    if (top == maxLength)
        return true;
    else
        return false;
}
bool mystack::push(int num)
{
    if (isfull())
        return false;
    else
    {
        data[top] = num;
        top++;
        return true;
    }
}
bool mystack::pop(int &num)
{
    if (isempty())
        return false;
    else
    {
        top--;
        num = data[top];
        return true;
    }
}