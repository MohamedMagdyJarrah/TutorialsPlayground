#include <iostream>

class Player{

private:
    std::string m_name;
    int m_health;
    int m_xp;
    static int num_of_players;

public:
    Player(std::string player_name = "None", int player_health = 0, int player_xp = 0);
    Player(const Player& source);
    ~Player();
    static int getNumOfPlayers();

};

Player::Player(std::string player_name, int player_health, int player_xp) : m_name{player_name}, m_health{player_health}, m_xp{player_xp}
{
    num_of_players++;
}

Player::Player(const Player& source) : Player{source.m_name,source.m_health,source.m_xp}
{}

Player::~Player(){
    num_of_players--;
}

int Player::num_of_players{0};

int Player::getNumOfPlayers(){
    return num_of_players;
}

void displayActivePlayers(){
    std::cout << "Current Active Players: " << Player::getNumOfPlayers() << std::endl << std::endl;
}

int main(){
    std::cout << ">> No objects of player class has been created" << std::endl;
    displayActivePlayers();
    std::cout << ">> Creating Player 1..."  << std::endl;
    Player player1{"Player1"};
    displayActivePlayers();
    std::cout << ">> Creating Player 2..."  << std::endl;
    Player player2{"Player2"};
    displayActivePlayers();

    std::cout << ">> Creating Player 3 inside a block ..."  << std::endl;
    {
        Player player3{"Player3"};
        displayActivePlayers();
    }
    std::cout << ">> After Destroying Player 3 inside the block ..."  << std::endl;
    displayActivePlayers();

    std::cout << ">> Creating Player 4 in the heap ..."  << std::endl;
    Player* player4 = new Player{"Player4"};
    displayActivePlayers();
    delete player4;
    std::cout << ">> After Freeing Player 4 from the heap ..."  << std::endl;
    displayActivePlayers();


    return 0;
}