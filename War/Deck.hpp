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
    std::vector<Card> primaryDeck;
    std::vector<Card> usedCards;
public:
    Deck();
    void shuffle();
    void recreate();
    int getSize();
    Card deal();
    void displayPrimary();
    void displayUsed();
    void count();
};
#include <stdio.h>

#endif /* Deck_hpp */
