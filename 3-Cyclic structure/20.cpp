#include <iostream>
using namespace std;

int main()
{
    int number, digit, cnt = 0;
    cin >> number >> digit;
    while (number)
    {
        if (number % 10 == digit)
            cnt++;
        number /= 10;
    }
    cout << cnt << endl;
    return 0;
}