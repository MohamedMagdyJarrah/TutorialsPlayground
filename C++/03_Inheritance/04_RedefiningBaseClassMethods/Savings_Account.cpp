#include "Savings_Account.h"


Savings_Account::Savings_Account(double balance,double int_rate) : Account{balance},m_intRate{int_rate}
{}


Savings_Account::Savings_Account() : Savings_Account{0.0,0.0}
{}


void Savings_Account::deposit(double amount){
    amount += (amount * m_intRate/100);
    Account::deposit(amount);
}

std::ostream& operator<<(std::ostream& os, const Savings_Account& account){
    os << "Savings Account balance: " << account.m_balance << ", Interest rate: " << account.m_intRate;
    return os;
}