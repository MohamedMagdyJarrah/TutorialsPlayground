#include <iostream>

class Base
{
public:
    virtual void say_hello() const {
        std::cout << "Hello from the base class." << std::endl;
    }

    virtual ~Base() {}
};

class Derived : public Base
{
public:
    virtual void say_hello() {  // This is redefinition as the we forgot to use const keyword
        std::cout << "Hello from the derived class." << std::endl;
    }

    virtual ~Derived() {}
};

class Derived1 : public Base
{
public:
    virtual void say_hello() const override {  // Override will give you compile error until the signature of the method match the base method
        std::cout << "Hello from the derived1 class." << std::endl;
    }

    virtual ~Derived1() {}
};

int main()
{
    Base* p1 = new Derived();
    p1->say_hello(); // Statically bounded as the method is redefined

    Base* p2 = new Derived1();
    p2->say_hello(); // Dynamically bounded as the method is overrided

    return 0;
}

/*
    - The final specifier
        - When used at the class level
            -> Prevents a class from being derived from
            Ex:
                1- class My_class final {
                        ...
                    };

                2- class Derived final: public Base {
                        ...
                    };


        - When used at the method level
            -> Prevents virtual method from being overridden in derived classes
            Ex:
                class A {
                public:
                    virtual void do_something();
                };

                class B: public A {
                    virtual void do_something() final;      // prevent futher overriding
                };

                class C: public B {
                    virtual void do_something();            // COMPILER ERROR - Can't override
                };

*/