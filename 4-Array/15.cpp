#include <cctype>
#include <algorithm>
#include <iostream>
using namespace std;

int main()
{
    int cnt = 0, cnt_alpha = 0, left, right, max = 0, left_1, right_1, max_1 = 0, left_2, right_2, max_2 = 0;
    char str[10005] = {0}, process[10005] = {0};
    int map[10005];
    while ((str[cnt] = getchar()) != EOF)
        cnt++;

    for (int i = 0; i < cnt; i++)
        if (isalpha(str[i]))
        {
            process[cnt_alpha] = toupper(str[i]);
            map[cnt_alpha] = i;
            cnt_alpha++;
        }

    for (int i = 0; i < cnt_alpha; i++)
    {
        //process[i]作为中心，奇数个
        for (int j = 0; i - j >= 0 && i + j < cnt_alpha && process[i - j] == process[i + j]; j++)
        {
            left_1 = map[i - j];
            right_1 = map[i + j];
            max_1 = 2 * j + 1;
        }
        //process[i]和process[i+1]作为中心，偶数个
        for (int j = 0; i - j >= 0 && i + j + 1 < cnt_alpha && process[i - j] == process[i + j + 1]; j++)
        {
            left_2 = map[i - j];
            right_2 = map[i + j + 1];
            max_2 = 2 * j + 2;
        }
        if (max_1 > max)
        {
            max = max_1;
            left = left_1;
            right = right_1;
        }
        if (max_2 > max)
        {
            max = max_2;
            left = left_2;
            right = right_2;
        }
        /* if (max_1 > 0)
        {
            cout << max_1 << endl;
            for (int j = left_1; j <= right_1; j++)
                cout
                    << str[j];
            cout << endl;
        }
        if (max_2 > 0)
        {
            cout << max_2 << endl;
            for (int j = left_2; j <= right_2; j++)
                cout
                    << str[j];
            cout << endl;
        } */
    }
    cout << max << endl;
    for (int i = left; i <= right; i++)
        cout << str[i];
    cout << endl;
    return 0;
}