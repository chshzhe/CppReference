#include <iostream>
using namespace std;

int main()
{
    int B;
    cin >> B;
    for (int i = 1; i <= 200; i++)
    {
        int temp = i * i;
        int top = 0;
        int a[20];
        while (temp)
        {
            a[top++] = temp % B;
            temp /= B;
        }
        bool flag = true;
        for (int j = 0; j < top; j++)
        {
            if (a[j] != a[top - 1 - j])
            {
                flag = false;
                break;
            }
        }
        if (flag)
        {
            int temp = i;
            int top_2 = 0;
            int b[20];
            while (temp)
            {
                b[top_2++] = temp % B;
                temp /= B;
            }
            for (int j = top_2 - 1; j >= 0; j--)
                if (b[j] < 10)
                    cout << b[j];
                else
                    cout << char(b[j] - 10 + 'A');
            cout
                << ' ';
            for (int j = top - 1; j >= 0; j--)
                if (a[j] < 10)
                    cout << a[j];
                else
                    cout << char(a[j] - 10 + 'A');
            cout << endl;
        }
    }
}