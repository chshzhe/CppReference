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
    money = money + money * rate; // money * (1 + rate)就不过
}
void SavingAccount::changerate(double newRate)
{
    rate = newRate;
}
SavingAccount::~SavingAccount() {}