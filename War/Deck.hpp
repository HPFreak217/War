//
//  Deck.hpp
//  War
//
//  Created by Carlos Hurtado on 5/23/17.
//  Copyright © 2017 Carlos Hurtado. All rights reserved.
//

#ifndef Deck_hpp
#define Deck_hpp
#include "Card.hpp"
class Deck
{
private:
    std::vector<Card> primaryDeck; //vector that holds the deck of unused cards to be dealt
    std::vector<Card> usedCards; //vector that holds the deck of cards that have already been dealt with
public:
    Deck();//default constructor
    void shuffle(); //Method to shuffle the deck of cards
    void recreate(); // Method that adds the cards from the unused pile to the primary deck vector
    int getSize(); // Method that returns the size of the primary deck vector
    Card deal(); // Method that takes a card from the primary deck and inserts it into the unused pile
    void displayPrimary(); //Method that displays all the cards in the primary deck
    void count(); //method that counts each card that are in each suit
};
#include <stdio.h>

#endif /* Deck_hpp */
