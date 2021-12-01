#include <iostream>
using namespace std;

void Insert_Sort(int A[], int n)
{
    if (n > 0)
    {
        Insert_Sort(A, n - 1); //递归将前面n-1个元素排序好
        // 你的代码，把第n个元素插入到前面n-1个元素中
        int i = n - 1;
        int key = A[n];
        while ((i >= 0) && (key < A[i]))
        {
            A[i + 1] = A[i];
            i--;
        }
        A[i + 1] = key;
        return;
    }
}

int main()
{
    int n, num[1000];
    cin >> n;

    // 你的代码
    for (int i = 0; i < n; i++)
        cin >> num[i];
    Insert_Sort(num, n - 1);
    for (int i = 0; i < n; i++)
        cout << num[i] << ' ';
    return 0;
}
