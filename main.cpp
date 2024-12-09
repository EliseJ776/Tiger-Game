/* 
    This program allows the user to play the
    card game TigerGame. The program allows for
    a human player and a CPU player.
    Elise James
    Project 3
    28 March, 2023
*/
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Card.h"
#include "Deck.h"
#include "Hand.h"
#include "Player.h"

using namespace std;

int main() 
{
    cout << "Welcome to TigerGame!" << endl;
    
    //Creates deck and shuffles it
    Deck deck;
    deck.shuffle();

    cout << "The deck was shuffled and each player has drawn 5 cards." << endl;

    //Creates players and sets their hands to five cards
    Player computer(deck, 5);
    Player human(deck, 5);

    //Allows for five rounds to be played
    for (int round = 1; round <= 5; round++) {

        cout << "Round " << round << endl;
        cout << "-------" << endl;

        //Computer plays a card
        Card computerCard = computer.hand.dealCard(rand() % computer.hand.getHandSize() + 1);
        cout << "The computer plays: " << computerCard.printCard() << endl;

        //Shows the human player their hand and lets them choose a card
        cout << "Your hand: " << human.hand.printHand() << endl;
        int chosenCardIndex;
        do {
            cout << "Which card do you want to play? ";
            cin >> chosenCardIndex;
        } while (chosenCardIndex < 1 || chosenCardIndex > human.hand.getHandSize());
        Card humanCard = human.hand.dealCard(chosenCardIndex);
        cout << "You played: " << humanCard.printCard() << endl;

        //Determines who won the round and updates the points of the winning player
        int computerScore = computerCard.getValue();
        int humanScore = humanCard.getValue();
        if (computerScore > humanScore) {
            cout << "The computer wins this round!" << endl;
            computer.score++;
        }
        else if (humanScore > computerScore) {
            cout << "You win this round!" << endl;
            human.score++;
        }
        else {
            cout << "Tie!" << endl;
        }

        //Prints out the current scores
        cout << "Current scores: " << endl; 
        cout << "Human: " << human.score << endl;
        cout << "Computer: " << computer.score << endl; 
    }

    //Prints the final results
    cout << "Final SCORE: " << endl;
    cout << "Human" << human.score << endl;
    cout << "Computer: " << computer.score << endl; 

    if (computer.score > human.score) {
        cout << "Computer has won!" << endl;
    }
    else if (human.score > computer.score) {
        cout << "Human has won!" << endl;
    }
    else {
        cout << "It's a tie!" << endl;
    }

    return 0;
}
