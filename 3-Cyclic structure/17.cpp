#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    bool flag = true;
    while (n != 1)
    {
        if (n % 2 == 1)
        {
            flag = false;
            break;
        }
        else
            n /= 2;
    }
    if (flag)
        cout << "true" << endl;
    else
        cout << "false" << endl;
}