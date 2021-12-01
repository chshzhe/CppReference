#include <iostream>
#include <cmath>
using namespace std;
struct returndata
{
    int max;
    int second;
};

returndata find(int array[], int begin, int end)
{
    returndata re;

    if (end - begin > 1)
    {
        returndata r1 = find(array, begin, (begin + end) / 2);
        returndata r2 = find(array, (begin + end) / 2 + 1, end);
        re.max = max(r1.max, r2.max);
        re.second = max(min(r1.max, r2.max), max(r1.second, r2.second));
    }
    else
    {
        re.max = max(array[begin], array[end]);
        if (begin == end)
            re.second = -2147483648;
        else
            re.second = min(array[begin], array[end]);
    }

    return re;
}
int main()
{
    int n, max, second;
    int *p;
    cin >> n;
    p = new int[n];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    returndata result = find(p, 0, n - 1);
    cout << result.max << ' ' << result.second << endl;
    delete[] p;
    return 0;
}