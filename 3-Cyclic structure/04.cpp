#include <iostream>
using namespace std;

int function(int x)
{
    int sum = 0;
    while (x != 0)
    {
        sum += x % 10;
        x = x / 10;
    }
    return sum;
}
int main()
{
    int n, temp;
    cin >> n;
    for (int i = 0; i < 10; i++)
        n = function(n);
    cout << n << endl;
    return 0;
}
