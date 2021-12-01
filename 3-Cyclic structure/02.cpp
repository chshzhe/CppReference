#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, n;
    cin >> a >> n;
    long long sum = 0;
    for (int i = 1; i <= n; i++)
        sum += a * (n - i + 1) * pow(10, i - 1);
    cout << sum << endl;
    return 0;
}