#include <iostream>
#include "LongLongInt.h"

using namespace std;

int main()
{

    bigInt x1;
    bigInt x2;
    x1.read();
    x2.read();
    sum(x1, x2).show();
    return 0;
}
