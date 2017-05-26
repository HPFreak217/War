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
    int value;
    std::string name;
public:
    Card(int val, std::string str);
    int getVal();
    std::string toString();
    void printCard();
};
#endif /* Card_hpp */
