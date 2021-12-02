#ifndef LongLongInt_h
#define LongLongInt_h

class bigInt
{
private:
    int *bits;
    int maxLength , length;

public:
    int getLength() { return length; }
    void init(int *ans, int l);
    void read();
    void doubleSpace();
    void show();
    int get(int pos) { return bits[pos]; }
    //bigInt sum(bigInt x1, bigInt x2);
    ~bigInt();
};

bigInt sum(bigInt x1, bigInt x2);

#endif