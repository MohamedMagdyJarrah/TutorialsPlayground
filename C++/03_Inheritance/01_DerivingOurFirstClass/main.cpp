#include <iostream>
#include "Account.h"
#include "Savings_Account.h"

int main(){
    std::cout << "=============================================" << std::endl;
    Account acc;
    Account* p_acc = new Account();
    acc.deposit(2000.0);
    acc.withdraw(500.0);

    p_acc->deposit(2000.0);
    p_acc->withdraw(500.0);
    delete p_acc;
    std::cout << "=============================================" << std::endl;

    std::cout << std::endl;

    std::cout << "=============================================" << std::endl;
    Savings_Account sav_acc;
    Savings_Account* p_sav_acc = new Savings_Account();
    sav_acc.deposit(2000.0);
    sav_acc.withdraw(500.0);
    p_sav_acc->deposit(2000.0);
    p_sav_acc->withdraw(500.0);
    delete p_sav_acc;
    std::cout << "=============================================" << std::endl;

    return 0;
}