//
//  Deck.cpp
//  War
//
//  Created by Carlos Hurtado on 5/23/17.
//  Copyright © 2017 Carlos Hurtado. All rights reserved.
//

#include "Deck.hpp"
#include <iostream>
#include <algorithm>    // std::shuffle
#include <random>       // std::default_random_engine
#include <chrono>       // std::chrono::system_clock

/*
 * Default constructor that creates the primary deck of cards
 */
Deck::Deck()
{
    for(int i = 0; i < 4; i++)
    {
        for(int j = 1; j <=14; j++ )
        {
            if(i == 0)
            {
                Card temp(j,"H");
                primaryDeck.push_back(temp);
            }
            else if(i == 1)
            {
                Card temp(j,"D");
                primaryDeck.push_back(temp);
            }
            else if(i == 2)
            {
                Card temp(j,"S");
                primaryDeck.push_back(temp);
            }
            else
            {
                Card temp(j,"C");
                primaryDeck.push_back(temp);
            }
        }
    }
}

/*
 * Method that loops through the usedCards vector and adds each item back into the primary deck
 */
void Deck::recreate()
{
    for(Card temp: usedCards)
    {
        primaryDeck.push_back(temp);//add back to primary deck
    }
    usedCards.clear();// clear the unused deck
    shuffle();// shuffle the primary deck
}

/*
 * Method that removes a card from the primaryDeck to the used deck
 */
Card Deck::deal()
{
    Card temp(0,"T");
    if(primaryDeck.size() !=0)
    {
        Card card = primaryDeck.at(0);
        usedCards.push_back(card);
        primaryDeck.erase(primaryDeck.begin(), primaryDeck.begin()+1);
        return card;
    }
    else
    {
        return temp;
    }
}

/*
 * Method that returns the size of the primary deck
 */
int Deck::getSize()
{
    int size = (int) (primaryDeck.size());
    return size;
}

/*
 * Method that shuffles the contents of primaryDeck
 */
void Deck::shuffle()
{
    unsigned seed = std::chrono::system_clock::now().time_since_epoch().count();
    
    std::shuffle (primaryDeck.begin(), primaryDeck .end(), std::default_random_engine(seed));
}

/*
 * Method that loops the contents of the primary deck and print out the visual representation of the card
 */
void Deck::displayPrimary()
{
    for(Card i : primaryDeck)
    {
        i.printCard();
    }
}

/*
 * Method that counts each card and places the amount in each category
 */
void Deck::count()
{
    int one = 0;
    int two = 0;
    int three = 0;
    int four = 0;
    int five = 0;
    int six = 0;
    int seven = 0;
    int eight = 0;
    int nine = 0;
    int ten = 0;
    int ace = 0;
    int jack = 0;
    int queen = 0;
    int king = 0;
    for(Card c: primaryDeck)
    {
        if(c.getVal()==1)
        {
            one++;
        }
        else if(c.getVal() == 2)
        {
            two++;
        }
        else if(c.getVal() == 3)
        {
            three++;
        }
        else if(c.getVal() == 4)
        {
            four++;
        }
        else if(c.getVal() == 5)
        {
            five++;
        }
        else if(c.getVal() == 6)
        {
            six++;
        }
        else if(c.getVal() == 7)
        {
            seven++;
        }
        else if(c.getVal() == 8)
        {
            eight++;
        }
        else if(c.getVal() == 9)
        {
            nine++;
        }
        else if(c.getVal() == 10)
        {
            ten++;
        }
        else if(c.getVal() == 11)
        {
            jack++;
        }
        else if(c.getVal() == 12)
        {
            queen++;
        }
        else if(c.getVal() == 13)
        {
            king++;
        }
        else
        {
            ace++;
        }
    }
    int total = ace + one + two + three + four + five + six + seven + eight + nine + ten + jack
    + queen + king;
    std::cout<<"_______________________"<<std::endl;
    std::cout<<"Ace: "<<ace<<std::endl;
    std::cout<<"One: "<<one<<std::endl;
    std::cout<<"Two: "<<two<<std::endl;
    std::cout<<"Three: "<<three<<std::endl;
    std::cout<<"Four: "<<four<<std::endl;
    std::cout<<"Five: "<<five<<std::endl;
    std::cout<<"Six: "<<six<<std::endl;
    std::cout<<"Seven: "<<seven<<std::endl;
    std::cout<<"Eight: "<<eight<<std::endl;
    std::cout<<"Nine: "<<nine<<std::endl;
    std::cout<<"Ten: "<<ten<<std::endl;
    std::cout<<"Jack: "<<jack<<std::endl;
    std::cout<<"Queen: "<<queen<<std::endl;
    std::cout<<"King: "<<king<<std::endl;
    std::cout<<"Total: "<<total<<std::endl;
    std::cout<<"_______________________"<<std::endl;
    std::cout<<std::endl;
}
