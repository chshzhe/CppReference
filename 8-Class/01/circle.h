#ifndef circle_h
#define circle_h

class Circle
{
private:
    int x;
    int y;
    int r;

public:
    Circle(int xx, int yy, int rr) : x(xx), y(yy), r(rr){};
    void getO(int &xx, int &yy);
    int getR();
    void move(int xx, int yy);
    void setR(int rr);
    ~Circle();
};

#endif