/* 
    This program allows the user to play the
    card game TigerGame. The program allows for
    a human player and a CPU player.
    Elise James
    Project 3
    28 March, 2023
*/
#include "Deck.h"

Deck::Deck() 
{
    //Builds a deck of 20 cards, 10 purple and 10 orange
    for (int i = 1; i <= 10; i++) 
    {
        Card purple_card(i, Card::Color::purple);
        Card orange_card(i, Card::Color::orange);
        deck.push_back(purple_card);
        deck.push_back(orange_card);
    }
}

void Deck::shuffle()
{
    //Uses time to shuffle the deck of cards
    srand(time(0));
    random_shuffle(deck.begin(), deck.end());
}

Card Deck::drawCard() 
{
    //Allows a card to be drawn of the deck and then removes the card from the deck
    Card drawn_card = deck.front();
    deck.erase(deck.begin());
    return drawn_card;
}

int Deck::getDeckSize()  //Returns the size of the deck
{
    return deck.size();
}