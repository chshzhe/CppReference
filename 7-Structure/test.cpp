#include <iostream>
#include <string>
using namespace std;

int main()
{
    int x = 5;
    int y = ++x * x--;
    cout << y;
}