#include <iostream>
#include "MyString.h"

int main(){

    std::cout << std::boolalpha << std::endl;
    MyString a {"frank"};
    MyString b {"frank"};

    std::cout << (a==b) << std::endl;         // true
    std::cout << (a!=b) << std::endl;          // false
    
    b = "george";
    std::cout << (a==b) << std::endl;         // false
    std::cout << (a!=b) << std::endl;          // true
    std::cout << (a<b) << std::endl;          // true
    std::cout << (a>b) << std::endl;           // false
    
    MyString s1 {"FRANK"};
    s1 = -s1;       
    std::cout << s1 << std::endl;               // frank              

    s1 = s1 + "*****";
    std::cout << s1 << std::endl;               // frank*****       
    
    
    s1 += "-----";                        // frank*****-----
    std::cout << s1 << std::endl;
    
    MyString s2{"12345/"};
    s1 = s2 * 3;
    std::cout << s1 << std::endl;              // 12345/12345/12345/
    
    MyString s3{"abcdef/"};  
    s3 *= 5;
    std::cout << s3 << std::endl;             // abcdef/abcdef/abcdef/abcdef/abcdef/
    
    
    MyString s = "Frank";
    ++s;
    std::cout << s << std::endl;                  // FRANK
    
    s = -s; 
    std::cout << s << std::endl;                  // frank
    
    MyString result;
    result = ++s;                           
    std::cout << s << std::endl;                  // FRANK
    std::cout << result << std::endl;           // FRANK
    
    s = "Frank";
    s++;
    std::cout << s << std::endl;                  // FRANK
    
    s = -s;
    std::cout << s << std::endl;                  // frank
    result = s++;
    std::cout << s << std::endl;                  // FRANK
    std::cout << result << std::endl;           // frank
    


    return 0;
}