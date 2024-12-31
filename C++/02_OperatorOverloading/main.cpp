#include <iostream>
#include "MyString.h"

int main(){

    // ====================== Creating MyString Class ====================== 
    // MyString empty;
    // MyString greeting{"Hello Garrah"};
    // MyString copyEmpty{empty};
    // MyString copyGreeting{greeting};

    // empty.display();
    // greeting.display();
    // copyEmpty.display();
    // copyGreeting.display();


    // ====================== Assignment Operator Overloading ======================
    // MyString source{"source"}; // Argument Constructed
    // MyString destination; // Empty Constructed

    // std::cout << "Destination before copy assignment:" << std::endl;
    // destination.display();
    // destination = source;   // Copy assignment will be used here
    // std::cout << "Destination after copy assignment:" << std::endl;
    // destination.display();

    // std::cout << std::endl;

    // MyString a{"Ahmed"};
    // MyString b;
    // MyString c;

    // std::cout << "b before move assignment:" << std::endl;
    // b.display();
    // b = MyString{"Hello"};   // Move assignment will be used here
    // std::cout << "b after move assignment:" << std::endl;
    // b.display();

    // std::cout << std::endl;

    // std::cout << "c before move assignment:" << std::endl;
    // c.display();
    // c = "Bye";   // Move assignment will be used here
    // std::cout << "c after move assignment:" << std::endl;
    // c.display();
    
    // ====================== Binary and Unary Operators Overloading ======================
    MyString mohamed{"MOHAMED"};
    std::cout << "mohamed before unary (-) operator" << std::endl;
    mohamed.display();
    std::cout << "mohamed after unary (-) operator" << std::endl;
    mohamed = -mohamed;
    mohamed.display();

    std::cout << std::endl;

    MyString myFullName;
    MyString garrah{"garrah"};
    myFullName = mohamed + garrah;
    myFullName.display();

    std::cout << std::endl;

    myFullName = " ";
    myFullName = mohamed + " " + garrah;
    myFullName.display();

    std::cout << std::endl;
    std::cout << "Comparing operator result: " << (mohamed == garrah) << std::endl;
    std::cout << "Comparing operator result: " << (mohamed == mohamed) << std::endl;

    std::cout << std::endl;
    std::cout << ">> Testing Instertion operator overloading" << std::endl;
    MyString firstName{"Mohamed"}; 
    MyString lastName;
    std::cout << "Enter you last name to print it with you first name ( "<< firstName << " ): " << std::endl;
    std::cin >> lastName;
    std::cout << "Hello, " << firstName << " " << lastName;

    return 0;
}