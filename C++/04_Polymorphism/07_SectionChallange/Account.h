#ifndef _H_ACCOUNT_
#define _H_ACCOUNT_

#include <iostream>
#include <string>

class I_Printable {
    friend std::ostream& operator<<(std::ostream& os, const I_Printable& obj);
public:
    virtual void print(std::ostream& os) const = 0;
    virtual ~I_Printable() = default;
};

class Account : public I_Printable{
private:
    static constexpr const char* def_name = "Un-named Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string m_name;
    double m_balance; // We made the balance protected to let the derived class has access for this member
public:
    Account(std::string name = def_name, double balance = def_balance);
    virtual bool deposit(double amount) = 0 ;
    virtual bool withdraw(double amount) = 0;
    virtual ~Account() = default;
};





#endif // ! _H_ACCOUNT_