#include "Account.h"


Account::Account(std::string name, double balance) : m_name{name},m_balance{balance}
{}

std::ostream& operator<<(std::ostream& os, const I_Printable& obj) {
    obj.print(os);
    return os;
}

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
