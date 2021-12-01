#include <iostream>
using namespace std;

int main()
{
    int time;
    cin >> time;
    cout << time / 3600 << "小时" << (time / 60) % 60 << "分" << time % 60 << "秒" << endl;
    return 0;
}