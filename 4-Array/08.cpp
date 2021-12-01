#include <iostream>
using namespace std;

int main()
{
    int m, n;
    cin >> m >> n;
    int mat[12][12];
    int max[12], min[12];
    for (int i = 0; i < m; i++)
        max[i] = -2147483648;
    for (int i = 0; i < n; i++)
        min[i] = 2147483647;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
        {
            cin >> mat[i][j];
            if (mat[i][j] > max[i])
                max[i] = mat[i][j];
            if (mat[i][j] < min[j])
                min[j] = mat[i][j];
        }
    bool flag = true;
    for (int i = 0; i < m; i++)
        for (int j = 0; j < n; j++)
            if (mat[i][j] == max[i] && mat[i][j] == min[j])
            {
                cout << "mat[" << i << "][" << j << "]=" << mat[i][j] << endl;
                flag = false;
            }
    if (flag)
        cout << "Not Found" << endl;
    return 0;
}