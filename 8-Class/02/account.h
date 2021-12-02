#ifndef account_h
#define account_h

class SavingAccount
{
private:
    static int newID;
    int id;
    double money;
    double rate = 0.05;

public:
    SavingAccount(double m)
    {
        money = m;
        newID++;
        id = newID;
    }
    void display();
    void calculate();
    void changerate(double newRate);
    ~SavingAccount();
};

#endif