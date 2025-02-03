#include <iostream>

class Base
{
public:
    void say_hello() const {
        std::cout << "Hello from the base class." << std::endl;
    }
};

class Derived : public Base
{
public:
    void say_hello() const {
        std::cout << "Hello from the derived class." << std::endl;
    }
};

void greetings(const Base& obj){
    std::cout << "Greetings: ";
    obj.say_hello();
}

int main(){
    Base baseObj;
    Derived derivedObj;

    greetings(baseObj);
    // The function will deal with the object as a base object as the complier static bind the derived to base according to the argument of the function
    greetings(derivedObj);

    Base* ptr = new Derived();  // It is valid as the Derived (is a) base class 
    // Here the ptr I created is Base type so when we call a method using this pointer it will call the member method of the Base class 
    ptr->say_hello();

    return 0;
}