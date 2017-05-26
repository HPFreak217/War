//
//  Card.cpp
//  War
//
//  Created by Carlos Hurtado on 5/23/17.
//  Copyright © 2017 Carlos Hurtado. All rights reserved.
//

#include "Card.hpp"
#include <iostream>
#include <sstream>
Card::Card(int val, std::string str)
{
    value = val;
    name = str;
}

int Card::getVal()
{
    return value;
}
std::string Card::toString()
{
    std::ostringstream os;
    if(name == "H")
    {
        if(value<=10)
        {
            os<<value<<" of Hearts";
        }
        else if(value == 11)
        {
            os<<"Jack of Hearts";
        }
        else if(value == 12)
        {
            os<<"Queen of Hearts";
        }
        else if(value == 13)
        {
            os<<"King of Hearts";
        }
        else
        {
            os<<"Ace of Hearts";
        }
    }
    else if(name == "C")
    {
        if(value<=10)
        {
            os<<value<<" of Clubs";
        }
        else if(value == 11)
        {
            os<<"Jack of Clubs";
        }
        else if(value == 12)
        {
            os<<"Queen of Clubs";
        }
        else if(value == 13)
        {
            os<<"King of Clubs";
        }
        else
        {
            os<<"Ace of Clubs";
        }
    }
    else if(name == "S")
    {
        if(value<=10)
        {
            os<<value<<" of Spades";
        }
        else if(value == 11)
        {
            os<<"Jack of Spades";
        }
        else if(value == 12)
        {
            os<<"Queen of Spades";
        }
        else if(value == 13)
        {
            os<<"King of Spades";
        }
        else
        {
            os<<"Ace of Spades";
        }
    }
    else
    {
        if(value<=10)
        {
            os<<value<<" of Diamonds";
        }
        else if(value == 11)
        {
            os<<"Jack of Diamonds";
        }
        else if(value == 12)
        {
            os<<"Queen of Diamonds";
        }
        else if(value == 13)
        {
            os<<"King of Diamonds";
        }
        else
        {
            os<<"Ace of Diamonds";
        }
    }
    return os.str();
}

void Card::printCard()
{
    if(name == "H")
    {
        if(value>0 && value<10)
        {
            std::cout<<" ----------- "<<std::endl;
            std::cout<<"|"<<value<<"          |"<<std::endl;
            std::cout<<"|  *** ***  |"<<std::endl;
            std::cout<<"| *   *   * |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|    * *    |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          "<<value<<"|"<<std::endl;
            std::cout<<" -----------"<<std::endl;
        }
        else if(value ==10)
        {
            std::cout<<" ----------- "<<std::endl;
            std::cout<<"|"<<value<<"         |"<<std::endl;
            std::cout<<"|  *** ***  |"<<std::endl;
            std::cout<<"| *   *   * |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|    * *    |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|         "<<value<<"|"<<std::endl;
            std::cout<<" -----------"<<std::endl;
        }
        else if(value == 11)
        {
            std::cout<<" ----------- "<<std::endl;
            std::cout<<"|J          |"<<std::endl;
            std::cout<<"|  *** ***  |"<<std::endl;
            std::cout<<"| *   *   * |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|    * *    |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          J|"<<std::endl;
            std::cout<<" -----------"<<std::endl;
        }
        else if(value == 12)
        {
            std::cout<<" ----------- "<<std::endl;
            std::cout<<"|Q          |"<<std::endl;
            std::cout<<"|  *** ***  |"<<std::endl;
            std::cout<<"| *   *   * |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|    * *    |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          Q|"<<std::endl;
            std::cout<<" -----------"<<std::endl;
        }
        else if(value == 13)
        {
            std::cout<<" ----------- "<<std::endl;
            std::cout<<"|K          |"<<std::endl;
            std::cout<<"|  *** ***  |"<<std::endl;
            std::cout<<"| *   *   * |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|    * *    |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          K|"<<std::endl;
            std::cout<<" -----------"<<std::endl;
        }
        else
        {
            std::cout<<" ----------- "<<std::endl;
            std::cout<<"|A          |"<<std::endl;
            std::cout<<"|  *** ***  |"<<std::endl;
            std::cout<<"| *   *   * |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|    * *    |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          A|"<<std::endl;
            std::cout<<" -----------"<<std::endl;
        }
    }
    else if(name == "D")
    {
        if(value >= 1 && value <=9)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|"<<value<<"          |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|    * *    |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          "<<value<<"|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
        else if(value == 10)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|10         |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|    * *    |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|         10|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
        else if(value == 11)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|J          |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|    * *    |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          J|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
            
        }
        else if(value == 12)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|Q          |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|    * *    |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          Q|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
        else if(value == 13)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|K          |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|    * *    |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          K|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
        else
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|A          |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|    * *    |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          A|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
    }
    else if(name == "S" )
    {
        if(value >= 1 && value <=9)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|"<<value<<"          |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"| * * * * * |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          "<<value<<"|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
        else if(value == 10)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|10         |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"| * * * * * |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|         10|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
        else if(value == 11)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|J          |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"| * * * * * |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          J|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
            
        }
        else if(value == 12)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|Q          |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"| * * * * * |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          Q|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
        else if(value == 13)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|K          |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"| * * * * * |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          K|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
        else
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|A          |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"| * * * * * |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          A|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
    }
    else
    {
        if(value >= 1 && value <=9)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|"<<value<<"          |"<<std::endl;
            std::cout<<"| * * * * * |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          "<<value<<"|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
        else if(value == 10)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|10         |"<<std::endl;
            std::cout<<"| * * * * * |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|         10|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
        else if(value == 11)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|J          |"<<std::endl;
            std::cout<<"| * * * * * |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          J|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
            
        }
        else if(value == 12)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|Q          |"<<std::endl;
            std::cout<<"| * * * * * |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          Q|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
        else if(value == 13)
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|K          |"<<std::endl;
            std::cout<<"| * * * * * |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          K|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
        else
        {
            std::cout<<" -----------"<<std::endl;
            std::cout<<"|A          |"<<std::endl;
            std::cout<<"| * * * * * |"<<std::endl;
            std::cout<<"|  *     *  |"<<std::endl;
            std::cout<<"|   *   *   |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|     *     |"<<std::endl;
            std::cout<<"|          A|"<<std::endl;
            std::cout<<" ----------- "<<std::endl;
        }
    }
    std::cout<<toString()<<"\n"<<std::endl;
}
/*
 std::cout<<" -----------"<<std::endl;
 std::cout<<"|           |"<<std::endl;
 std::cout<<"|           |"<<std::endl;
 std::cout<<"|           |"<<std::endl;
 std::cout<<"|           |"<<std::endl;
 std::cout<<"|           |"<<std::endl;
 std::cout<<"|           |"<<std::endl;
 std::cout<<"|           |"<<std::endl;
 std::cout<<"|           |"<<std::endl;
 std::cout<<" ----------- "<<std::endl;
 */
