#ifndef _H_SAVINGS_ACCOUNT_
#define _H_SAVINGS_ACCOUNT_

#include "Account.h"
#include <iostream>

class Savings_Account : public Account{
public:
    int m_intRate;
    Savings_Account();
    ~Savings_Account();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif // ! _H_SAVINGS_ACCOUNT_