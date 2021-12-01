#include <iostream>
using namespace std;

int main()
{
    char type;
    int start, end;
    cin >> type >> start >> end;
    switch (type)
    {
    case 'c':
        if (end - start <= 3)
            cout << 5 * (end - start) << endl;
        else
            cout << 15 + 10 * (end - start - 3) << endl;
        break;
    case 'b':
        if (end - start <= 2)
            cout << 10 * (end - start) << endl;
        else
            cout << 20 + 15 * (end - start - 2) << endl;
        break;
    case 't':
        if (end - start <= 1)
            cout << 10 * (end - start) << endl;
        else
            cout << 10 + 15 * (end - start - 1) << endl;
        break;
    }

    return 0;
}