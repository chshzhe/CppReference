#include <cstring>
#include <iostream>
using namespace std;

int main()
{
    int n, m;
    cin >> n >> m;
    cout << (((n / 10) % 10 + 7) % 10) * 1000 + ((n % 10 + 7) % 10) * 100 + ((n / 1000 + 7) % 10) * 10 + ((n / 100) % 10 + 7) % 10 << ' ' << (((m / 10) % 10 + 3) % 10) * 1000 + ((m % 10 + 3) % 10) * 100 + ((m / 1000 + 3) % 10) * 10 + (((m / 100) % 10 + 3) % 10) << endl;
    return 0;
}