/* 
    This program allows the user to play the
    card game TigerGame. The program allows for
    a human player and a CPU player.
    Elise James
    Project 3
    28 March, 2023
*/
#include "Hand.h"

Hand::Hand() {}

Hand::Hand(Deck& deck, int N) 
{
    //Creates a hand that is of a given size
    for (int i = 0; i < N; i++) 
    {
        Card drawnCard = deck.drawCard();
        hand.push_back(drawnCard);
    }
}

string Hand::printHand()
{
    //Uses stringstream to build a string of the player's hand of cards
    stringstream out;
    for (vector<Card>::size_type i = 0; i < hand.size(); i++)
    {
        out << "[" << i+1 << "] " << hand[i].printCard() << " ";
    }
    return out.str();
}


Card Hand::dealCard(int index) 
{
    //Allows a card to be dealt from the hand and then be removed from the hand
    Card dealtCard = hand[index-1];
    hand.erase(hand.begin() + index-1);
    return dealtCard;
}

int Hand::getHandSize() //Returns the size of the hand
{
    return hand.size();
}
