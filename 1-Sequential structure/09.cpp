#include <iostream>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    double money = n * 1.0 * 0.6;
    cout << int(money) << ' ' << (money - int(money)) * 10 << endl;
    return 0;
}