#include <iostream>
#include <vector>

class Move{
private:
    int* m_data;

public:
    Move(int d);
    Move(const Move& source);
    Move(Move&& source) noexcept;
    ~Move();
};

Move::Move(int d){
    m_data = new int;
    *m_data = d;
    std::cout << "Main constructor called with data: " << *m_data << std::endl;
}

Move::Move(const Move& source) : Move(*source.m_data) {
    std::cout << "Copy constructor called with data: " << *m_data << std::endl;
}

Move::Move(Move &&source) noexcept : m_data{source.m_data} {
    source.m_data = nullptr;
    std::cout << "Move constructor called with data: " << *m_data << std::endl;
}

Move::~Move(){
    if(m_data != nullptr){
        std::cout << "Destructor called and free the data: " << *m_data << std::endl;
    } else {
        std::cout << "Destructor called and free the nullptr" << std::endl;
    }
    delete m_data;
}

int main(){
    std::vector<Move> vec;
    // reserve to 2 elements to see the move constructor and avoid let vec making its resize operations
    // which may lead to use copy constructor
    vec.reserve(2);

    vec.push_back(Move{10});
    vec.push_back(Move{20});

    std::cout << "======================= Resize May happens now =======================" << std::endl;
    // Here copy constructor may be used by the compiler as in the first time the vector couldn't store the value and
    // need to grow so it will retry to store using Copy Constructor
    // since it is not marked as noexcept so it might throw an exception , so to make it more exception safe compiler is going to start copy constructor for copying remaining elements.
    vec.push_back(Move{30}); 

    // By marking the move constructor noexcept, we ensure that algorithms can always safely implement moves instead falling back to copying if move fails.
    // https://www.geeksforgeeks.org/move-constructors-in-c-with-examples/

    return 0;
}