#include <iostream>
using namespace std;

int main()
{
    int n, maxNum = -2147483648, secondmaxNum = -2147483648, temp;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> temp;
        if (temp > maxNum)
        {
            secondmaxNum = maxNum;
            maxNum = temp;
        }
        else if (temp > secondmaxNum)
            secondmaxNum = temp;
    }
    cout << secondmaxNum << endl;
    return 0;
}