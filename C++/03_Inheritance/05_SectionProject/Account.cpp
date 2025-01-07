#include "Account.h"


Account::Account(std::string name, double balance) : m_name{name},m_balance{balance}
{}

bool Account::deposit(double amount){
    if(amount > 0){
        m_balance += amount;
        return true;
    } else {
        return false;
    }
}

bool Account::withdraw(double amount){
    if(m_balance-amount < 0){
        return false;
    }else{
        m_balance -= amount;
        return true;
    }
}

double Account::get_balance() const{
    return m_balance;
}


std::ostream& operator<<(std::ostream& os, const Account& account){
    os << "[Account: " << account.m_name << " ,Balance: " << account.m_balance << "]";
    return os;
}