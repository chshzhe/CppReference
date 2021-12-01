#include <iostream>
#include <cstring>
#include <algorithm>
using namespace std;

int main()
{
    int n;
    char ch;
    string *p;
    cin >> n;
    p = new string[n];
    for (int i = 0; i < n; i++)
        cin >> p[i];
    cin >> ch;
    for (int i = 0; i < n; i++)
        p[i].erase(std::remove(p[i].begin(), p[i].end(), ch), p[i].end());
    sort(p, p + n);
    for (int i = 0; i < n; i++)
        cout << p[n - 1 - i] << endl;
    delete[] p;
    return 0;
}