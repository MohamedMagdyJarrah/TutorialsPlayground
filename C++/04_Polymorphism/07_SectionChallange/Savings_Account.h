#ifndef _H_SAVINGS_ACCOUNT_
#define _H_SAVINGS_ACCOUNT_

#include "Account.h"
#include <iostream>

class Savings_Account : public Account{
    friend std::ostream& operator<<(std::ostream& os, const Savings_Account& account);
private:
    static constexpr const char* def_name = "Un-named Saving Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_intRate = 0.0;
protected:
    double m_intRate;
public:
    Savings_Account(std::string name = def_name,double balance = def_balance, double int_rate = def_intRate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream& os) const override;
    virtual ~Savings_Account() = default;
};

#endif // ! _H_SAVINGS_ACCOUNT_