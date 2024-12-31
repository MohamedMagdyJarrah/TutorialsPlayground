#include "MyString.h"
#include <cstring>
#include <iostream>

MyString::MyString()
{
    m_str = new char[1];
    *m_str = '\0';
}

MyString::MyString(const char* s) : m_str(nullptr)
{
    if(s == nullptr){
        m_str = new char[1];
        *m_str = '\0';
    } else {
        m_str = new char[std::strlen(s) + 1];  // Length of string received plus one for nullptr
        std::strcpy(m_str,s);       // Copy the received string in new allocated memory
    }
}

MyString::MyString(const MyString& source) : MyString(source.m_str)
{}

MyString::~MyString()
{
    delete [] m_str;
}

const char* MyString::getSrting()
{
    return m_str;
}

int MyString::getLength()
{
    return std::strlen(m_str);
}

void MyString::display()
{
    std::cout << "String:'" << getSrting() << "', Length: " << getLength() << std::endl;
}





