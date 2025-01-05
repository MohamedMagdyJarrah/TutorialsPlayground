#ifndef _H_ACCOUNT_
#define _H_ACCOUNT_

#include <iostream>
#include <string>

class Account{
private:
public:
    double m_balance;
    std::string m_name;
    Account();
    ~Account();
    void deposit(double amount);
    void withdraw(double amount);
};

#endif // ! _H_ACCOUNT_