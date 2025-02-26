#ifndef _CHECKING_ACCOUNT_H
#define _CHECKING_ACCOUNT_H

#include "Account.h"
#include <string.h>
#include <iostream>

class Checking_Account : public Account
{
friend std::ostream& operator<<(std::ostream& os, const Checking_Account& account);
private:
    static constexpr const char* def_name = "Un-named Checking Account";
    static constexpr double def_balance = 0.0;
    static constexpr double feePerWithdraw = 1.5;
public:
    Checking_Account(std::string name = def_name, double balance = def_balance);
    virtual bool withdraw(double amount) override;
    virtual bool deposit(double amount) override;
    virtual void print(std::ostream& os) const override;
    virtual ~Checking_Account() = default;
};

#endif // !_CHECKING_ACCOUNT_H