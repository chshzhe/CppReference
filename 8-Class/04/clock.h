#ifndef class_h
#define class_h

class classClock
{
private:
    int timestamp;

public:
    void init(int hh, int mm, int ss);
    void init(int stamp);
    void output();
    int getTimeStamp();
    ~classClock() {}
};

void calculate(classClock time1, classClock time2);

#endif