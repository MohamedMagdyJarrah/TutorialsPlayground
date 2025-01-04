#ifndef _MY_STRING_H_
#define _MY_STRING_H_
#include <cstring>
#include <iostream>

class MyString
{
    // Implementing operator overloading with non-member methods
    friend bool operator==(const MyString& lhs, const MyString& rhs);
    friend MyString operator-(const MyString& rhs);
    friend MyString operator+(const MyString& lhs, const MyString& rhs);
    friend std::ostream &operator<<(std::ostream &os, const MyString& obj); // // Should always implemented as non-member methods
    friend std::istream &operator>>(std::istream &is, MyString& obj);  // Should always implemented as non-member methods
private:
    char* m_str;

public:
    MyString(); // Constructor
    MyString(const char* s);    // Argument Constructor
    MyString(const MyString& source);   // Copy Constructor
    MyString(MyString&& source);   // Move Constructor
    ~MyString();    // Destructor

    MyString& operator=(const MyString& rhs);   // Copy Assignment 
    MyString& operator=(MyString&& rhs);   // Move Assignment

    // =================================== Operator Overloading Implemented as member methods ===================================
    // MyString operator+(const MyString& rhs) const;   // summation with l-value (concatenate)
    // MyString operator+(MyString&& rhs);   // summation with r-value
    // MyString operator-() const;   // unary - operation (make lowercase)
    // bool operator==(const MyString& rhs) const; // Comparison Operator

    bool operator!=(const MyString& rhs);
    bool operator>(const MyString& rhs);
    bool operator<(const MyString& rhs);
    MyString& operator+=(const MyString& rhs);
    MyString operator*(unsigned int multiplier);
    MyString& operator*=(unsigned int multiplier);
    MyString& operator++();
    MyString operator++(int);

    const char* getSrting();
    int getLength();
    void display();
};

#endif // !_MY_STRING_H_
