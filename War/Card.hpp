//
//  Card.hpp
//  War
//
//  Created by Carlos Hurtado on 5/23/17.
//  Copyright © 2017 Carlos Hurtado. All rights reserved.
//

#ifndef Card_hpp
#define Card_hpp

#include <stdio.h>
#include <string>
#include <vector>

class Card
{
private:
    int value;//value of the cod
    std::string name; //the card's suit
public:
    Card(int val, std::string str); //Card Constructor
    int getVal(); //value of the card
    std::string toString(); // The card's description
    void printCard(); //print out of the card
};
#endif /* Card_hpp */
