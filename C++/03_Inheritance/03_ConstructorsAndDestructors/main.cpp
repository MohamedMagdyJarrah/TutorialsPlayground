#include <iostream>

class Base
{
private:
    int m_value;
public:
    Base() {std::cout << "Base() is called" << std::endl;}
    Base(int x) : m_value{x} {std::cout << "Base(int) is called" << std::endl;}
    Base(const Base& other) : m_value{other.m_value} {std::cout << "Base(Base) is called" << std::endl;}
    ~Base() {std::cout << "~Base() is called" << std::endl;}

    Base& operator=(const Base& rhs){
        std::cout << "Base Copy Assignment called" << std::endl;
        if(this != &rhs){
            this->m_value = rhs.m_value;
        }
        return *this;
    }
};

class Derived : public Base
{
private:
    int m_doubledValue;
public:
    Derived() : Base{}, m_doubledValue{0} {std::cout << "Derived() is called" << std::endl;}
    Derived(int x) : Base{x}, m_doubledValue{x} {std::cout << "Derived(int) is called" << std::endl;}
    // Slicing the base part from the derived happens when we pass derived object to the base copy constructor
    Derived(const Derived& other) : Base{other}, m_doubledValue{other.m_doubledValue} {std::cout << "Derived(Derived) is called" << std::endl;}
    ~Derived(){ std::cout << "~Derived() is called" << std::endl;}

    Derived& operator=(const Derived& rhs){
        std::cout << "Derived Copy Assignment called" << std::endl;
        if(this != &rhs){
            Base::operator=(rhs); // Slicing happens here also
            this->m_doubledValue = rhs.m_doubledValue;
        }
        return *this;
    }
};



int main(void){
    // Base b;
    // Base b{100};
    // Base b{100}; // Overloaded Constructor
    // Base b1{b}; // Copy Constructor
    // b = b1; // Copy Assignment
    
    // Derived d;
    // Will call the no args base constructor first because we don't call parametrized base constructor in parametrized derived constructor
    // Derived d{100};
    // Derived d{100};
    // Derived d1{d};
    // d = d1;

    return 0;
}