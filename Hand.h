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
#include "Deck.h"
using namespace std;

#ifndef HAND_H_
#define HAND_H_

class Hand
{
private:
    vector<Card> hand;

public:
    Hand();
    Hand(Deck& deck, int N);
    string printHand();
    Card dealCard(int num);
    int getHandSize();
};

#endif // HAND_H_

