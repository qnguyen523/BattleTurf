#ifndef PLAYER_H_INCLUDED
#define PLAYER_H_INCLUDED
#include <SFML/Graphics.hpp>
#include <vector>

class Player
{
private:
    //int *scorebox_order;
    std::vector<int> scorebox_order;
    int score;
    sf::Color Player_color;
public:
    Player();

    void setcolor(sf::Color color);
    void resetscore();
    sf::Color getcolor();
    int getscore_order(int num);
    int getscore();
    void addscore(int value);
    void setscorebox_order(int value[], int num_score_each_player);
};

#endif // PLAYER_H_INCLUDED
