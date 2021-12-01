#include <iostream>
using namespace std;

//你的代码
void maxmin(auto array[], int n)
{
    auto max = array[0], min = array[0];
    for (int i = 0; i < n; i++)
    {
        if (min > array[i])
            min = array[i];
        if (array[i] > max)
            max = array[i];
    }
    cout << max << ' ' << min << endl;
}

int main()
{
    int m, n;
    int arr_int[10000];
    double arr_double[10000];

    // 输入m和整型数组
    cin >> m;
    for (int i = 0; i < m; i++)
        cin >> arr_int[i];

    // 输入n和浮点型 数组
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> arr_double[i];
    // 输出结果
    maxmin(arr_int, m);
    maxmin(arr_double, n);
    return 0;
}
