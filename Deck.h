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
#include "Card.h"
using namespace std;
#ifndef DECK_H_
#define DECK_H_


class Deck
{
    private:
    vector<Card> deck;

    public:
    Deck();
    void shuffle();
    Card drawCard();
    int getDeckSize();
};
  

#endif // DECK_H_
