#include "circle.h"
#include <iostream>
using namespace std;
int main()
{
    int x, y, r;
    cin >> x >> y >> r;
    Circle c(x, y, r);

    int cx, cy;
    c.getO(cx, cy);
    cout << cx << ' ' << cy << endl;
    cout << c.getR() << endl;

    int move_x, move_y;
    cin >> move_x >> move_y;
    c.move(move_x, move_y);
    c.getO(cx, cy);
    cout << cx << ' ' << cy << endl;

    int new_r;
    cin >> new_r;
    c.setR(new_r);
    cout << c.getR() << endl;

    return 0;
}
