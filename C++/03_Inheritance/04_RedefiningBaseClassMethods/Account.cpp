#include "Account.h"


Account::Account(double balance) : m_balance{balance}
{}

Account::Account() : Account{0.0} // delegating constructor
{}


void Account::deposit(double amount){
    m_balance += amount;
}

void Account::withdraw(double amount){
    if(m_balance-amount < 0){
        std::cout << "We can't withdraw with this amount: " << amount << std::endl;
    }else{
        m_balance -= amount;
    }
}

std::ostream& operator<<(std::ostream& os, const Account& account){
    os << "Account balance: " << account.m_balance;
    return os;
}