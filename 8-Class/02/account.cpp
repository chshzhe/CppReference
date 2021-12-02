#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;
#include "account.h"
int SavingAccount::newID = 0;

void SavingAccount::display()
{
    cout << id << ' ' << setiosflags(ios::fixed) << setprecision(2) << money << ' ' << rate << endl;
}
void SavingAccount::calculate()
{
    //money = int(money * (1 + rate) * 100.0) / 100.0;
    money = money * (1 + rate);
    //money = round(money * (1 + rate) * 100.0) / 100.0;
    //Why??? 
}
void SavingAccount::changerate(double newRate)
{
    rate = newRate;
}
SavingAccount::~SavingAccount() {}