#include <iostream>

class Player{

private:
    std::string m_name;
    int m_health;
    int m_xp;

public:
    Player(std::string player_name = "None", int player_health = 0, int player_xp = 0);
    Player(const Player& source);
    std::string getName() {return m_name;}
    int getHealth() {return m_health;}
    int getXp() {return m_xp;}

};

Player::Player(std::string player_name, int player_health, int player_xp)
    : m_name{player_name}, m_health{player_health}, m_xp{player_xp}
{
    std::cout << "Three args constructor called" << std::endl;
    std::cout << "Values of three args constructor are: " << m_name << ", " << m_health << ", " << m_xp << std::endl;  
}

Player::Player(const Player& source)
    // : m_name{source.m_name}, m_health{source.m_health}, m_xp{source.m_xp} 
    // or Delegating constructor
    : Player{source.m_name,source.m_health,source.m_xp}
{
    std::cout << "Copy constructor called with name " << source.m_name << std::endl;
}


Player display_player(Player p)
{
    std::cout << "Player Name is " << p.getName() << std::endl;
    std::cout << "Player Health is " << p.getHealth() << std::endl;
    std::cout << "Player Xp is " << p.getXp() << std::endl;
}

int main(){

    Player player1{"Ahmed",100};
    std::cout << std::endl << std::endl; 
    Player player2{"Mohamed",100,10};

    Player playerToCopy{player2};
    // or

    // passing object by value means copying the object
    display_player(player1);

    return 0;
}