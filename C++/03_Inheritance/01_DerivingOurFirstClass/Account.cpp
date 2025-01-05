#include "Account.h"


Account::Account() : m_balance{0}, m_name{"Account"}
{}

Account::~Account()
{}

void Account::deposit(double amount){
    std::cout << "Account deposit is called with amount: " << amount << std::endl;
}

void Account::withdraw(double amount){
    std::cout << "Account withdraw is called with amount: " << amount << std::endl;
}