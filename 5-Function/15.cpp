#include <iostream>
using namespace std;
int Gcd(int a, int b)
{

    if (a < b)
    {
        int temp = b;
        b = a;
        a = temp;
    }
    if (a % b == 0)
        return b;
    else
        return Gcd(b, a % b);
}
int main()
{
    int a, b;
    cin >> a >> b;
    cout << Gcd(a, b) << endl;
    return 0;
}
