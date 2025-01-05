#include "Savings_Account.h"


Savings_Account::Savings_Account() : m_intRate(3)
{}

Savings_Account::~Savings_Account()
{}

void Savings_Account::deposit(double amount){
    std::cout << "Savings_Account deposit is called with amount: " << amount << std::endl;
}

void Savings_Account::withdraw(double amount){
    std::cout << "Savings_Account withdraw is called with amount: " << amount << std::endl;
}