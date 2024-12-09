/* 
    This program allows the user to play the
    card game TigerGame. The program allows for
    a human player and a CPU player.
    Elise James
    Project 3
    28 March, 2023
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>
#include <vector>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <ctime>
#include <algorithm>
#include <string>
using namespace std;
#ifndef CARD_H_
#define CARD_H_

class Card 
{
public:
    enum Color {purple, orange};
    Card();
    Card(int rank, Color color);
    string printCard();
    int getRank() const;
    Color getColor() const;
    int getValue() const;

    private:
    int rank = 0;
    Color color = Color::purple;
    int value = 0;

};
  

#endif // CARD_H_
