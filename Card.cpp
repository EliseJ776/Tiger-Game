/* 
    This program allows the user to play the
    card game TigerGame. The program allows for
    a human player and a CPU player.
    Elise James
    Project 3
    28 March, 2023
*/
#include "Card.h"
 
Card::Card()
{
    //Sets default card values
    rank = 0;
    color = Color::purple;
    value = 0;
    
    //Determines the value of each card based on their color
    if (color == Color::purple) 
    {
        value = rank;
    } 
    else 
    {
        value = 2 * rank;
    }
}

Card::Card(int rank, Color color)
{
    this->rank = rank;
    this->color = color;
    
    //Determines the value of each card based on their color
    if (color == Color::purple) 
    {
        value = rank;
    } 
    else 
    {
        value = 2 * rank;
    }
}

string Card::printCard()
{
    stringstream cardOut;
    string colorStr;
    
    if (color == Color::purple) 
    {
        colorStr = "purple";
    } 
    else 
    {
        colorStr = "orange";
    }
    
    cardOut << colorStr << ":" << rank; //Uses stringstream to build a string with the card info
    return cardOut.str();
}

int Card::getRank() const //Returns the rank of the card
{
    return rank;
}

Card::Color Card::getColor() const //Returns the color of the card
{
    return color;
}

int Card::getValue() const //Returns the value of the card
{
    return value;
}
