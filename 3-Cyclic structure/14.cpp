#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    if (n < 1000 || n > 1000000)
    {
        cout << "Input error!" << endl;
        return 0;
    }
    for (int i = 999; i >= 100; i--)
        if (n % i == 0)
        {
            cout << i << endl;
            return 0;
        }
    cout << "Not found!" << endl;
    return 0;
}