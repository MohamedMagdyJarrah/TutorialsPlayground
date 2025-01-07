#include "Savings_Account.h"


Savings_Account::Savings_Account(std::string name, double balance,double int_rate) : Account{name,balance},m_intRate{int_rate}
{}


bool Savings_Account::deposit(double amount){
    amount += (amount * m_intRate/100);
    return  Account::deposit(amount);
}

std::ostream& operator<<(std::ostream& os, const Savings_Account& account){
    os << "[Savings Account: " << account.m_name << ", Balance: "<< account.m_balance << ", Interest rate: " << account.m_intRate << "%]";
    return os;
}