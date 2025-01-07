#ifndef _H_SAVINGS_ACCOUNT_
#define _H_SAVINGS_ACCOUNT_

#include "Account.h"
#include <iostream>

class Savings_Account : public Account{
    friend std::ostream& operator<<(std::ostream& os, const Savings_Account& account);
protected:
    double m_intRate;
public:
    Savings_Account();
    Savings_Account(double balance,double int_rate);
    void deposit(double amount);
};

#endif // ! _H_SAVINGS_ACCOUNT_