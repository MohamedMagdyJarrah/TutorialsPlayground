#include <iostream>

class Account 
{
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw." << std::endl;
    }

    virtual ~Account(){
        // std::cout << "In Account::Destructor." << std::endl;
    }
};

class Checking : public Account
{
public:
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw." << std::endl;
    }

    virtual ~Checking(){
        // std::cout << "In Checking::Destructor." << std::endl;
    }
};

class Saving : public Account
{
public:
    virtual void withdraw(double amount) {
        std::cout << "In Saving::withdraw." << std::endl;
    }

    virtual ~Saving(){
        // std::cout << "In Saving::Destructor." << std::endl;
    }
};

class Trust : public Account
{
public:
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw." << std::endl;
    }

    virtual ~Trust(){
        // std::cout << "In Trust::Destructor." << std::endl;
    }
};

void do_withdraw(Account &account, double amount) {
    account.withdraw(amount);
}


int main(void) {

    Account a;
    Account &ref = a;
    ref.withdraw(1000);
    
    Trust t;
    Account &ref1 = t;
    ref1.withdraw(1000);

    std::cout << std::endl;

    Account a1;
    Checking a2;
    Saving a3;
    Trust a4;

    do_withdraw(a1,1000);
    do_withdraw(a2,1000);
    do_withdraw(a3,1000);
    do_withdraw(a4,1000);

    return 0;
}