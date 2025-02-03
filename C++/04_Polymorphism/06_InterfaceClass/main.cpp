#include <iostream>
#include <ostream>
#include <vector>

class I_Printable {
    friend std::ostream& operator<<(std::ostream& os, const I_Printable& obj);
public:
    virtual void print(std::ostream& os) const = 0;
    virtual ~I_Printable() = default;
};

std::ostream& operator<<(std::ostream& os, const I_Printable& obj) {
    obj.print(os);
    return os;
}


class Account : public I_Printable
{
public:
    virtual void withdraw(double amount) {
        std::cout << "In Account::withdraw." << std::endl;
    }

    virtual void print(std::ostream& os) const override {
        os << "Hello from Account Class";
    }

    virtual ~Account(){
        std::cout << "In Account::Destructor." << std::endl;
    }
};

class Checking : public Account
{
    public:
    virtual void withdraw(double amount) override{
        std::cout << "In Checking::withdraw." << std::endl;
    }

    virtual void print(std::ostream& os) const override {
        os << "Hello from Checking Class";
    }


    virtual ~Checking(){
        std::cout << "In Checking::Destructor." << std::endl;
    }
};

class Saving : public Account
{
    public:
    virtual void withdraw(double amount) override{
        std::cout << "In Saving::withdraw." << std::endl;
    }

    virtual void print(std::ostream& os) const override {
        os << "Hello from Saving Class";
    }


    virtual ~Saving(){
        std::cout << "In Saving::Destructor." << std::endl;
    }
};

class Trust : public Account
{
    public:
    virtual void withdraw(double amount) override{
        std::cout << "In Trust::withdraw." << std::endl;
    }

    virtual void print(std::ostream& os) const override {
        os << "Hello from Trust Class";
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

    for(const auto account:accounts){
        std::cout << *account << std::endl;        
    }


    delete p1;
    delete p2;
    delete p3;
    delete p4;

    return 0;
}