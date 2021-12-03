#include <iostream>
#include <cmath>
using namespace std;
#include "LongLongInt.h"

void bigInt::doubleSpace()
{
    int *newBits;
    newBits = new int[maxLength * 2];
    for (int i = 0; i < maxLength; i++)
        newBits[i] = bits[i];
    delete[] bits;
    bits = newBits;
    maxLength *= 2;
}
void bigInt::read()
{
    char ch;
    maxLength = 10000;
    length = 0;
    bits = new int[maxLength];
    ch = cin.get();
    while (ch != '\n')
    {
        bits[length] = ch - '0';
        length++;
        if (length >= (maxLength - 1))
            bigInt::doubleSpace();
        if ((ch = cin.get()) == EOF)
            break; // cnmcnmcnmcnm!!! 就这Educoder一直卡住不让我过
    }
}

void bigInt::init(int *ans, int l)
{
    bits = ans;
    length = l;
    maxLength = length + 1;
}
bigInt sum(bigInt x1, bigInt x2)
{
    int length1 = x1.getLength(), length2 = x2.getLength();
    long long maxLength = max(length1, length2);
    int *ans;
    ans = new int[maxLength + 1];
    for (int i = 0; i < maxLength + 1; i++)
        ans[i] = 0;

    for (int i = 0; i < maxLength; i++)
    {
        int num1 = (length1 - i - 1 < 0) ? 0 : x1.get(length1 - i - 1);
        int num2 = (length2 - i - 1 < 0) ? 0 : x2.get(length2 - i - 1);
        ans[maxLength - i - 1] = (ans[maxLength - i] + num1 + num2) / 10;
        ans[maxLength - i] = (ans[maxLength - i] + num1 + num2) % 10;
    }
    bigInt result;
    if (ans[0] == 0)
        result.init(ans + 1, maxLength);
    else
        result.init(ans, maxLength + 1);
    return result;
}

void bigInt::show()
{
    for (int i = 0; i < length; i++)
    {
        cout << bits[i];
    }
    cout << endl;
}
bigInt::~bigInt() {}