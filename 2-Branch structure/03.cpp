#include <iostream>
using namespace std;

void swap(int &a, int &b)
{
    int temp;
    temp = b;
    b = a;
    a = temp;
}
int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b)
        swap(a, b);
    if (b < c)
        swap(b, c);
    if (a < b)
        swap(a, b);
    cout << a << ' ' << b << ' ' << c;
    return 0;
}