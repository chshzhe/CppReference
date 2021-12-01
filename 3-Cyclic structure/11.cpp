#include <iostream>
#include <cstdio>
using namespace std;

int main()
{
    int n, p, cnt_sum = 0;
    scanf("%d %d", &n, &p);
    /* for (int i = 2; i <= n; i++)
    {
        int temp = i;
        int cnt_temp = 0;
        while ((temp % p) == 0)
        {
            //cout << "temp= " << temp << endl;
            cnt_temp = cnt_temp + 1;
            temp = temp / p;
        } 
        for (int j = 1; j <= i; j++)
            if ((temp % p == 0) && (temp != 0))
            {
                cnt_temp = cnt_temp + 1;
                temp = temp / p;
            }
            else
                break;
        cnt_sum += cnt_temp;
    }
    cout << cnt_sum << endl; */
    int tem = 0;
    while (n)
    {
        tem += n / p;
        n /= p;
    }
    cout << tem << endl;
    //system("pause");
    return 0;
}