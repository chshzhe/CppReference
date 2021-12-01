#include <iostream>
using namespace std;

void merge(int A[], int p, int q, int r)
{
    int B[r - p + 1];
    int i = p, j = q + 1, k = 0;
    while (i <= q && j <= r)
    {
        if (A[i] >= A[j])
            B[k++] = A[j++];
        else
            B[k++] = A[i++];
    }
    if (i == q + 1)
        while (j <= r)
            B[k++] = A[j++];
    else
        while (i <= q)
            B[k++] = A[i++];
    for (i = p; i <= r; i++)
        A[i] = B[i - p];
}

void merge_Sort(int A[], int low, int high)
{
    if (low < high)
    {
        int i = (low + high) / 2;
        merge_Sort(A, low, i);
        merge_Sort(A, i + 1, high);
        merge(A, low, i, high);
    }
}

int main()
{
    int n, num[100];
    cin >> n;
    for (int i = 0; i < n; i++)
        cin >> num[i];
    merge_Sort(num, 0, n - 1);
    for (int i = 0; i < n; i++)
        cout
            << num[i] << ' ';

    return 0;
}
