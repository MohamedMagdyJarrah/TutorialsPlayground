#ifndef _H_ACCOUNT_
#define _H_ACCOUNT_

#include <iostream>
#include <string>

class Account{
friend std::ostream& operator<<(std::ostream& os, const Account& account);
private:
    static constexpr const char* def_name = "Un-named Account";
    static constexpr double def_balance = 0.0;
protected:
    std::string m_name;
    double m_balance; // We made the balance protected to let the derived class has access for this member
public:
    Account(std::string name = def_name, double balance = def_balance);
    bool deposit(double amount);
    bool withdraw(double amount);
    double get_balance() const;
};

#endif // ! _H_ACCOUNT_