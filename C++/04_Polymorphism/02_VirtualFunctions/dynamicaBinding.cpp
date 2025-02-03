#include <iostream>
#include <vector>

class Account 
{
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw." << std::endl;
    }

    virtual ~Account(){
        std::cout << "In Account::Destructor." << std::endl;
    }
};

class Checking : public Account
{
    virtual void withdraw(double amount) {
        std::cout << "In Checking::withdraw." << std::endl;
    }

    virtual ~Checking(){
        std::cout << "In Checking::Destructor." << std::endl;
    }
};

class Saving : public Account
{
    virtual void withdraw(double amount) {
        std::cout << "In Saving::withdraw." << std::endl;
    }

    virtual ~Saving(){
        std::cout << "In Saving::Destructor." << std::endl;
    }
};

class Trust : public Account
{
    virtual void withdraw(double amount) {
        std::cout << "In Trust::withdraw." << std::endl;
    }

    virtual ~Trust(){
        std::cout << "In Trust::Destructor." << std::endl;
    }
};

int main()
{
    Account* p1 = new Account();
    Account* p2 = new Checking();
    Account* p3 = new Saving();
    Account* p4 = new Trust();

    std::vector<Account*> accounts = {p1,p2,p3,p4};
    for(const auto account:accounts){
        account->withdraw(1000); // withdraw methods is overrided in the derived classes as we used virtual keyword in the base class
    }
    
    // without virtual you will be redefine the method in every class 

    std::cout << std::endl;

    delete p1;
    delete p2;
    delete p3;
    delete p4;

    // We should when we use virtual methods in the base class, provide virtual destructor to it also
    // As we have pointers to account objects and when we delete them the compiler will not know which destructor to call (undefined behavior in C++)
    // This my cause memory leak if the p2,p3,p4 calls the destructor of the account class only
    // We should ensure the right sequence to call the destructors by using virtual destructors as I mention before.

    return 0;
}