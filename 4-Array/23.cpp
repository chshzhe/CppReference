#include <iostream>
using namespace std;

int main()
{
    int N, L, x, time;
    cin >> N >> L;
    int max = 0, min = L;
    bool isLeft = false;
    for (int i = 0; i < N; i++)
    {
        cin >> x;
        if (isLeft)
        {
            time = x;
            isLeft = false;
        }
        else
        {
            time = L - x;
            isLeft = true;
        }
        if (x == 0 || x == L)
        {
            min = 0;
            time = 0;
            continue;
        }
        if (time > max)
            max = time;
        if (time < min)
            min = time;
    }
    cout << min << ' ' << max << endl;
    return 0;
}