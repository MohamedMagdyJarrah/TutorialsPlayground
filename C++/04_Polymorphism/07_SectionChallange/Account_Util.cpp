#include "Account_Util.h"

void display(const std::vector<Account*>& accounts)
{
    std::cout << "\n=================================== Accounts ===================================" << std::endl;
    for(const auto account:accounts){
        std::cout << *account << std::endl;
    }
}


void deposit(std::vector<Account*>& accounts, double amount)
{
    std::cout << "\n=================================== Depositing to Accounts ===================================" << std::endl;
    for(auto account:accounts){
        if(account->deposit(amount)){
            std::cout << "Deposited " << amount << " to " << *account << std::endl;
        } else {
            std::cout << "Failed to deposit " << amount << " to " << *account << std::endl;
        }
    }
}


void withdraw(std::vector<Account*>& accounts, double amount)
{
    std::cout << "\n=================================== Withdrawing from Accounts ===================================" << std::endl;
    for(auto account:accounts){
        if(account->withdraw(amount)){
            std::cout << "Withdrawed " << amount << " from " << *account << std::endl;
        } else {
            std::cout << "Failed to withdraw " << amount << " from " << *account << std::endl;
        }
    }
}



