#include <iostream>
using namespace std;

int main()
{
    int n, temp;
    cin >> n;
    long long Sum = 0, theoreticalSum = n * (n + 1) / 2;
    for (int i = 1; i <= n; i++)
    {
        cin >> temp;
        Sum += temp;
    }
    cout << theoreticalSum - Sum << endl;
}