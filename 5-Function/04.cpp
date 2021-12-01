#include <iostream>
using namespace std;
void valid(int n)
{
    if (n == 1)
        cout << '1' << endl;
    else
    {
        cout << n << ' ';
        if (n % 2)
            valid(n * 3 + 1);
        else
            valid(n /= 2);
    }
}
int main()
{
    int n;
    cin >> n;
    if (n == 1)
    {
        cout << 1 << endl;
        return 0;
    }
    valid(n);
    return 0;
}