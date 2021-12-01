#include <iostream>
using namespace std;

struct complexT
{
    int real;
    int image;
};
void init(complexT &c, int x, int y)
{
    c.real = x;
    c.image = y;
}
void output(complexT &c)
{
    if (c.real == 0 && c.image != 0)
        cout << c.image << 'i' << endl;
    if (c.real != 0 && c.image == 0)
        cout << c.real << endl;
    if (c.real == 0 && c.image == 0)
        cout << '0' << endl;
    if (c.real != 0 && c.image != 0)
    {
        if (c.image > 0)
            cout << c.real << '+' << c.image << 'i' << endl;
        else
            cout << c.real << c.image << 'i' << endl;
    }
}
complexT complexTtimes(complexT x, complexT y)
{
    complexT result;
    result.real = x.real * y.real - x.image * y.image;
    result.image = x.real * y.image + x.image * y.real;
    return result;
}
complexT complexTplus(complexT x, complexT y)
{
    complexT result;
    result.real = x.real + y.real;
    result.image = x.image + y.image;
    return result;
}
int main()
{
    int x1, x2, y1, y2;
    cin >> x1 >> x2 >> y1 >> y2;
    complexT x, y, result;
    init(x, x1, x2);
    init(y, y1, y2);
    cout << "x = ";
    output(x);
    cout << "y = ";
    output(y);
    cout << "x += y; x = ";
    x = complexTplus(x, y);
    output(x);
    cout << "y *= x; y = ";
    y = complexTtimes(y, x);
    output(y);
    cout << "x + y = ";
    result = complexTplus(x, y);
    output(result);
    cout << "y * x = ";
    result = complexTtimes(y, x);
    output(result);
    cout << "x = ";
    output(x);
    cout << "y = ";
    output(y);
    return 0;
}