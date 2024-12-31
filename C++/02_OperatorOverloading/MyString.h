#ifndef _MY_STRING_H_
#define _MY_STRING_H_

class MyString
{
private:
    char* m_str;

public:
    MyString();
    MyString(const char* s);
    MyString(const MyString& source);
    ~MyString();
    const char* getSrting();
    int getLength();
    void display();
};

#endif // !_MY_STRING_H_
