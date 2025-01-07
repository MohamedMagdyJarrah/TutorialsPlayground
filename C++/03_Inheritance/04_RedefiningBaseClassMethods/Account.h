#ifndef _H_ACCOUNT_
#define _H_ACCOUNT_

#include <iostream>
#include <string>

class Account{
friend std::ostream& operator<<(std::ostream& os, const Account& account);
protected:
    double m_balance; // We made the balance protected to let the derived class has access for this member
public:
    Account();
    Account(double balance);
    void deposit(double amount);
    void withdraw(double amount);
};

#endif // ! _H_ACCOUNT_