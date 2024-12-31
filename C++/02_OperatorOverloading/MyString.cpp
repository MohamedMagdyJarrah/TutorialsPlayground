#include "MyString.h"

MyString::MyString()
{
    m_str = new char[1];
    *m_str = '\0';
    std::cout << "Constructor is called" << std::endl;
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
    std::cout << "Overloaded constructor is called" << std::endl;
}

MyString::MyString(MyString&& source) : m_str{source.m_str}
{
    source.m_str = nullptr;
    std::cout << "Move constructor is called" << std::endl;
}

MyString::MyString(const MyString& source) : MyString(source.m_str)
{
    std::cout << "Copy constructor is called" << std::endl;
}

MyString::~MyString()
{
    delete [] m_str;
}

MyString& MyString::operator=(const MyString& rhs){
    std::cout << "Copy assignment is called" << std::endl;
    if(&rhs == this){
        return *this;
    } else {
        delete [] this->m_str;
        this->m_str = new char[std::strlen(rhs.m_str)+1];
        std::strcpy(this->m_str,rhs.m_str);
        return *this;
    }
}

MyString& MyString::operator=(MyString&& rhs){
    std::cout << "Move assignment is called" << std::endl;
    if(this == &rhs){
        return *this;
    }
    delete [] this->m_str;
    this->m_str = rhs.m_str;
    rhs.m_str = nullptr;
    return *this;
}


// =================================== Operator Overloading Implemented as member methods =================================== 
// MyString MyString::operator+(const MyString& rhs) const{
//     std::cout << "operator+ with l-value" << std::endl;
//     char* tempBuff = new char[std::strlen(this->m_str)+std::strlen(rhs.m_str)+1];
//     std::strcpy(tempBuff,this->m_str);
//     std::strcat(tempBuff,rhs.m_str);
//     MyString temp{tempBuff};
//     delete [] tempBuff;
//     return temp;
// }

// MyString MyString::operator+(MyString&& rhs){
//     std::cout << "operator+ with r-value" << std::endl;
//     char* tempBuff = new char[std::strlen(this->m_str)+std::strlen(rhs.m_str)+1];
//     std::strcpy(tempBuff,this->m_str);
//     std::strcat(tempBuff,rhs.m_str);
//     MyString temp{tempBuff};
//     rhs.m_str = nullptr;
//     delete [] tempBuff;
//     return temp;
// }

// MyString MyString::operator-() const {
//     char* buff = new char[std::strlen(this->m_str)+1];
//     std::strcpy(buff,this->m_str);
//     for(uint8_t i=0; i < std::strlen(buff) ; i++){
//         buff[i] = std::tolower(buff[i]);
//     }
//     MyString temp{buff};
//     delete [] buff;
//     return temp;
// }

// bool MyString::operator==(const MyString& rhs) const{
//     if(std::strcmp(this->m_str,rhs.m_str) == 0){
//         return true;
//     } else {
//         return false;
//     }
// }

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

bool operator==(const MyString& lhs, const MyString& rhs){
    return (std::strcmp(lhs.m_str,rhs.m_str) == 0);
}

MyString operator-(const MyString& rhs){
    char* buff = new char[std::strlen(rhs.m_str)+1];
    std::strcpy(buff,rhs.m_str);
    for(size_t i=0 ; i < std::strlen(buff) ; i++){
        buff[i] = std::tolower(buff[i]);
    }
    MyString temp{buff};
    delete [] buff;
    return temp;
}

MyString operator+(const MyString& lhs, const MyString& rhs){
    char* buff = new char[std::strlen(lhs.m_str)+std::strlen(rhs.m_str)+1];
    std::strcpy(buff,lhs.m_str);
    std::strcat(buff,rhs.m_str);
    MyString temp{buff};
    delete [] buff;
    return temp;
}

std::ostream &operator<<(std::ostream &os, const MyString& obj){
    os << obj.m_str;
    return os;
}

std::istream &operator>>(std::istream &is, MyString& obj){
    char* buff = new char[1000];
    is >> buff;
    obj = MyString{buff};
    delete [] buff;
    return is;
}