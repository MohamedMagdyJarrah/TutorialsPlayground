#include <iostream>

class Deep{

private:
    int* m_data;

public:
    Deep(int d);
    Deep(const Deep& source);
    ~Deep();

    void setData(int data);
    void getData();
};

Deep::Deep(int d){
    std::cout << "Main constructor called" << std::endl;
    m_data = new int;
    *m_data = d;
}

Deep::Deep(const Deep& source){
    std::cout << "Copy Deep constructor called" << std::endl;
    m_data = new int;
    *m_data = *source.m_data;
}

Deep::~Deep(){
    std::cout << "Destructor called" << std::endl;
    delete m_data;
}

void Deep::getData() {
    std::cout << "Data is " << *m_data << std::endl;
}
void Deep::setData(int data) {
    *m_data = data;
    std::cout << "Set data with " << *m_data << std::endl;
}

void displayDeepObject(Deep s){
    std::cout << "Displaying Deep object" << std::endl;
    s.getData();
}

// This code is safe as when we copy the object we allocate a new location then assign to it the value from the copied object
// In the opposite of shallow copy which was copy the pointer it self and point to the same location
int main(){

    Deep obj1{10};
    obj1.getData();

    displayDeepObject(obj1);
    
    // No problem as the data not freed
    obj1.setData(100);

    return 0;
}