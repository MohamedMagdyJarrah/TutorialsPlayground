#include <iostream>
#include <vector>
#include "Account.h"
#include "Account_Util.h"
#include "Savings_Account.h"
#include "Trust_Account.h"
#include "Checking_Account.h"

int main(){
    std::cout.precision(2);
    std::cout << std::fixed;
   
    // Accounts
    Account* saving = new Savings_Account("Saving",5000,0.5);
    Account* checking = new Checking_Account("Checking",5000);
    Account* trust = new Trust_Account("Trust",5000,0.5);
    std::vector<Account*> accounts = {saving,checking,trust};
    
    display(accounts);
    deposit(accounts,1000);
    withdraw(accounts,1000);

    return 0;
}