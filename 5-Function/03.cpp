#include <iostream>
using namespace std;
void printInt(int n, int base)
{
    if (n != 0)
    {
        printInt(n / base, base);
        int bit = n % base;
        if (bit < 10)
            cout << bit;
        else
            cout << char(bit - 10 + 'A');
    }
}
int main()
{
    int n, base;
    cin >> n >> base;
    printInt(n, base);
    cout << endl;
    return 0;
}
