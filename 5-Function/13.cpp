#include <iostream>
using namespace std;

int GetApple(int a[], int height, int n)
{
    int cnt = 0;
    for (int i = 0; i < n; i++)
        if (a[i] <= height + 30)
            cnt++;
    return cnt;
}

int main()
{
    int n, a[100], height;
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> a[i];
    cin >> height;

    //你的代码
    cout << GetApple(a, height, n) << endl;
    return 0;
}
