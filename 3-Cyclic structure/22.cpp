#include <iostream>
using namespace std;

int main()
{
    int temp, postive = 0, negtive = 0;
    cin >> temp;
    while (temp != 0)
    {
        if (temp > 0)
            postive++;
        if (temp < 0)
            negtive++;
        cin >> temp;
    }
    cout << postive << ' ' << negtive << endl;
    return 0;
}