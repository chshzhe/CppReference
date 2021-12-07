#include <iostream>

#include "mystack.h"
using namespace std;

int main()
{
    int num[] = {1, 3, 5, 7, 9, 11}, i, data;
    mystack s(5);
    cout << "The stack is empty: " << s.isempty() << endl;
    cout << "The stack is full: " << s.isfull() << endl;
    for (i = 0; i <= 5; i++)
    {
        if (s.push(num[i]))
            cout << "Push " << num[i] << " success!" << endl;
        else
            cout << "Push " << num[i] << " fail!" << endl;
    }
    cout << "The stack is empty: " << s.isempty() << endl;
    cout << "The stack is full: " << s.isfull() << endl;
    for (i = 0; i <= 5; i++)
    {
        if (s.pop(data))
            cout << "Pop " << data << " success!" << endl;
        else
            cout << "Pop fail!" << endl;
    }
    return 0;
}