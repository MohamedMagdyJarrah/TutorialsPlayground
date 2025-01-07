#include "Account_Util.h"

void display(const std::vector<Account>& accounts)
{
    std::cout << "\n=================================== Accounts ===================================" << std::endl;
    for(const auto& account:accounts){
        std::cout << account << std::endl;
    }
}

void display(const std::vector<Savings_Account>& accounts)
{
    std::cout << "\n=================================== Saving Accounts ===================================" << std::endl;
    for(const auto& account:accounts){
        std::cout << account << std::endl;
    }
}

void display(const std::vector<Checking_Account>& accounts)
{
    std::cout << "\n=================================== Checking Accounts ===================================" << std::endl;
    for(const auto& account:accounts){
        std::cout << account << std::endl;
    }
}

void display(const std::vector<Trust_Account>& accounts)
{
    std::cout << "\n=================================== Trust Accounts ===================================" << std::endl;
    for(const auto& account:accounts){
        std::cout << account << std::endl;
    }
}

void deposit(std::vector<Account>& accounts, double amount)
{
    std::cout << "\n=================================== Depositing to Accounts ===================================" << std::endl;
    for(auto& account:accounts){
        if(account.deposit(amount)){
            std::cout << "Deposited " << amount << " to " << account << std::endl;
        } else {
            std::cout << "Failed to deposit " << amount << " to " << account << std::endl;
        }
    }
}

void deposit(std::vector<Savings_Account>& accounts, double amount)
{
    std::cout << "\n=================================== Depositing to Saving Accounts ===================================" << std::endl;
    for(auto& account:accounts){
        if(account.deposit(amount)){
            std::cout << "Deposited " << amount << " to " << account << std::endl;
        } else {
            std::cout << "Failed to deposit " << amount << " to " << account << std::endl;
        }
    }
}

void deposit(std::vector<Checking_Account>& accounts, double amount)
{
    std::cout << "\n=================================== Depositing to Checking Accounts ===================================" << std::endl;
    for(auto& account:accounts){
        if(account.deposit(amount)){
            std::cout << "Deposited " << amount << " to " << account << std::endl;
        } else {
            std::cout << "Failed to deposit " << amount << " to " << account << std::endl;
        }
    }
}

void deposit(std::vector<Trust_Account>& accounts, double amount)
{
    std::cout << "\n=================================== Depositing to Trust Accounts ===================================" << std::endl;
    for(auto& account:accounts){
        if(account.deposit(amount)){
            std::cout << "Deposited " << amount << " to " << account << std::endl;
        } else {
            std::cout << "Failed to deposit " << amount << " to " << account << std::endl;
        }
    }
}


void withdraw(std::vector<Account>& accounts, double amount)
{
    std::cout << "\n=================================== Withdrawing from Accounts ===================================" << std::endl;
    for(auto& account:accounts){
        if(account.withdraw(amount)){
            std::cout << "Withdrawed " << amount << " from " << account << std::endl;
        } else {
            std::cout << "Failed to withdraw " << amount << " from " << account << std::endl;
        }
    }
}

void withdraw(std::vector<Savings_Account>& accounts, double amount)
{
    std::cout << "\n=================================== Withdrawing from Saving Accounts ===================================" << std::endl;
    for(auto& account:accounts){
        if(account.withdraw(amount)){
            std::cout << "Withdrawed " << amount << " from " << account << std::endl;
        } else {
            std::cout << "Failed to withdraw " << amount << " from " << account << std::endl;
        }
    }
}

void withdraw(std::vector<Checking_Account>& accounts, double amount)
{
    std::cout << "\n=================================== Withdrawing from Checking Accounts ===================================" << std::endl;
    for(auto& account:accounts){
        if(account.withdraw(amount)){
            std::cout << "Withdrawed " << amount << " from " << account << std::endl;
        } else {
            std::cout << "Failed to withdraw " << amount << " from " << account << std::endl;
        }
    }
}

void withdraw(std::vector<Trust_Account>& accounts, double amount)
{
    std::cout << "\n=================================== Withdrawing from Trust Accounts ===================================" << std::endl;
    for(auto& account:accounts){
        if(account.withdraw(amount)){
            std::cout << "Withdrawed " << amount << " from " << account << std::endl;
        } else {
            std::cout << "Failed to withdraw " << amount << " from " << account << std::endl;
        }
    }
}


