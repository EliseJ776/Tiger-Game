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
#include "Hand.h"
using namespace std;

#ifndef PLAYER_H_ 
#define PLAYER_H_

class Player 
{
    public:
        Player()
        {
            score = 0;
        }
        Player(Deck& deck, int N): hand(Hand(deck, N)), score(0)
        {

        }
        Hand hand;
        int score = 0;
};

#endif // PLAYER_H_

