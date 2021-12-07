#ifndef mystack_h
#define mystack_h

class mystack
{
private:
    int maxLength = 100;
    int *data;
    int top;

public:
    mystack(int l = 100);
    bool isempty();
    bool isfull();
    bool pop(int &num);
    bool push(int num);
    ~mystack() {}
};

#endif