#ifndef _TRUST_ACCOUNT_H
#define _TRUST_ACCOUNT_H

#include "Savings_Account.h"
#include <string>

class Trust_Account : public Savings_Account
{
friend std::ostream& operator<<(std::ostream& os, const Trust_Account& account);
private:
    static constexpr const char* def_name = "Un-named Saving Account";
    static constexpr double def_balance = 0.0;
    static constexpr double def_intRate = 0.0;
    static constexpr int withdrawalsTrials = 3;
    static constexpr double maxBonusAmount = 5000.0;
    static constexpr double bonus_amount = 50.0;
    static constexpr double max_withdraw_percent = 0.2;
protected:
    int m_numOfWithdrawals;
public:
    Trust_Account(std::string name = def_name, double balance = def_balance, double intRate = def_intRate);
    virtual bool deposit(double amount) override;
    virtual bool withdraw(double amount) override;
    virtual void print(std::ostream& os) const override;
    virtual ~Trust_Account() = default;
};

#endif // !_TRUST_ACCOUNT_H
