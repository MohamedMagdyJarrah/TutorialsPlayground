#include "Trust_Account.h"
#include "Savings_Account.h"

Trust_Account::Trust_Account(std::string name, double balance, double intRate) 
    : Savings_Account{name,balance,intRate}, m_numOfWithdrawals{0}
{
    
}

bool Trust_Account::deposit(double amount){
    if(amount >= maxBonusAmount){
        amount += bonus_amount;
    }
    return Savings_Account::deposit(amount);
}



bool Trust_Account::withdraw(double amount)
{
    if(m_numOfWithdrawals >= withdrawalsTrials || amount > (m_balance * max_withdraw_percent)){
        return false;
    } else {
        m_numOfWithdrawals++;
        return Savings_Account::withdraw(amount);
    }
}


std::ostream& operator<<(std::ostream& os, const Trust_Account& account)
{
    os << "[Trust Account: " << account.m_name << ", Balance: "<< account.m_balance << ", Interest rate: " << account.m_intRate 
    <<  "%, Withdrawls: " << account.m_numOfWithdrawals << "]";
    return os;
}
