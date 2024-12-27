#include <iostream>

class Shallow{

private:
    int* m_data;

public:
    Shallow(int d);
    Shallow(const Shallow& source);
    ~Shallow();

    void setData(int data);
    void getData();
};

Shallow::Shallow(int d){
    std::cout << "Main constructor called" << std::endl;
    m_data = new int;
    *m_data = d;
}

Shallow::Shallow(const Shallow& source){
    std::cout << "Copy Shallow constructor called" << std::endl;
    m_data = source.m_data;
}

Shallow::~Shallow(){
    std::cout << "Destructor called" << std::endl;
    delete m_data;
}

void Shallow::getData() {
    std::cout << "Data is " << *m_data << std::endl;
}
void Shallow::setData(int data) {
    *m_data = data;
    std::cout << "Set data with " << *m_data << std::endl;
}

void displayShallowObject(Shallow s){
    std::cout << "Displaying Shallow object" << std::endl;
    s.getData();
}

// This code will crash because when we make a copy the destructor of the copied object will free the memory 
// and when the block of main function the destructor will called again for the original object and try to free the same memory freed before
// As the pointer in the copied object points to the same location as we copied the pointer not the value
int main(){

    Shallow obj1{10};
    obj1.getData();

    displayShallowObject(obj1);

    return 0;
}