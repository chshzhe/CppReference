#include <iostream>
using namespace std;

int main()
{
    int n, num = 0;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        int temp = i;
        int sum = 0;
        while (temp)
        {
            sum = 10 * sum + temp % 10;
            temp /= 10;
        }
        if ((i + sum) == n)
            num += 1;
    }
    cout << num << endl;
}