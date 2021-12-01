#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    do
    {
        cout << n << ' ';
        if (n % 2)
            n = n * 3 + 1;
        else
            n /= 2;

    } while (n != 1);
    cout << n << endl;
    return 0;
}