#include "MyString.h"

int main(){
    MyString empty;
    MyString greeting{"Hello Garrah"};
    MyString copyEmpty{empty};
    MyString copyGreeting{greeting};

    empty.display();
    greeting.display();
    copyEmpty.display();
    copyGreeting.display();

    return 0;
}