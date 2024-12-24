#include <iostream>

class Player{

private:
    std::string m_name;
    int m_health;
    int m_xp;

public:
    Player();
    Player(std::string player_name);
    Player(std::string player_name, int player_health, int player_xp);

};

Player::Player(std::string player_name, int player_health, int player_xp)
    : m_name{player_name}, m_health{player_health}, m_xp{player_xp}
{
    std::cout << "Three args constructor called" << std::endl;
    std::cout << "Values of three args constructor are: " << m_name << ", " << m_health << ", " << m_xp << std::endl;  
}

Player::Player(std::string player_name)
    : Player(player_name, 0, 0)
{
    std::cout << "One arg constructor called" << std::endl;   
    std::cout << "Values of one arg constructor are: " << m_name << ", " << m_health << ", " << m_xp << std::endl;  
}

Player::Player()
    : Player("None", 0, 0)
{
    std::cout << "No args constructor called" << std::endl;   
    std::cout << "Values of no args constructor are: " << m_name << ", " << m_health << ", " << m_xp << std::endl;  
}


int main(){

    Player player0;
    std::cout << std::endl << std::endl; 
    Player player1{"Nour"};
    std::cout << std::endl << std::endl; 
    Player player2{"Mohamed",100,10};

    return 0;
}