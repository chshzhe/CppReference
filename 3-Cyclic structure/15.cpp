#include <iostream>
using namespace std;

int main()
{
    int n, odd = 1, k = 0;
    cin >> n;
    while (n >= odd)
    {
        n -= odd;
        odd += 2;
        k++;
    }
    cout << k << endl;
    return 0;
}