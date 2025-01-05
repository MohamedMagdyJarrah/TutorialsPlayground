#include <iostream>

class Base
{
private:
    int m_a;
protected:
    int m_b;
public:
    int m_c;
    void display() { std::cout << "a: " << m_a << " ,b: " << m_b << " ,c: " << m_c << std::endl;}
};

class Derived : public Base
{
    // m_a will be not accessible
    // m_b will be protected 
        // - Protected members only be accessible inside the base class and class derived from this base class
        // - The objects from the base and derived classes don't have access on this member
    // m_c will be public

public:
    void baseMemberAccess(){
        m_a = 10; // Compiler errr
        m_b = 10; // OK
        m_c = 10; // OK
    }
};

int main(){
    std::cout << "Base member access from Base object" << std::endl;
    Base base;
    base.m_a = 10;  // Compiler error
    base.m_b = 10;  // Compiler error
    base.m_c = 10;  // OK
    
    std::cout << "Base member access from Derived object" << std::endl;
    Derived derived;
    derived.m_a = 10;  // Compiler error
    derived.m_b = 10;  // Compiler error
    derived.m_c = 10;  // OK

    return 0;
}