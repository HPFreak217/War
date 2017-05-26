//
//  main.cpp
//  War
//
//  Created by Carlos Hurtado on 5/23/17.
//  Copyright © 2017 Carlos Hurtado. All rights reserved.
//

#include <iostream>
#include <iomanip>
#include "Deck.hpp"

int player = 0;
int computer = 0;
void war(Deck deck);
int main(int argc, const char * argv[]) {
    Deck deck;
    bool isRunning = true;
    std::cout<<"Welcome to War!!!"<<std::endl;
    while(isRunning)
    {
        int option = 0;
        std::cout<<"1)Shuffle Deck"<<std::endl;
        std::cout<<"2)View Deck"<<std::endl;
        std::cout<<"3)Go to War"<<std::endl;
        std::cout<<"4)View Score"<<std::endl;
        std::cout<<"5)Exit"<<std::endl;
        std::cin>>option;
        if(option == 1)
        {
            std::cout<<"Shuffling...";
            deck.shuffle();
            std::cout<<"Done!"<<std::endl;
        }
        else if(option == 2)
        {
            deck.displayPrimary();
            std::cout<<"-Card Count-"<<std::endl;
            deck.count();
        }
        else if(option == 3)
        {
            std::cout<<"Let's go to War!!!"<<std::endl;
            war(deck);
        }
        else if(option == 4)
        {
            std::cout<<"Score:"<<std::endl;
            std::cout<<"-------------------"<<std::endl;
            std::cout<<"You: "<<std::right<<std::setw(14)<<player<<std::endl;
            std::cout<<"Computer: "<<std::right<<std::setw(9)<<computer<<std::endl;
            std::cout<<std::endl;
        }
        else if(option == 5)
        {
            std::cout<<"Exiting...Done!"<<std::endl;
            isRunning = false;
        }
        else
        {
            std::cout<<"-Invalid Input-"<<std::endl;
        }
    }
    return 0;
}

void war(Deck deck)
{
    bool isRunning = true;
    while(isRunning)
    {
        std::cout<<deck.getSize()<<std::endl;
        if(deck.getSize() == 0)
        {
            std::cout<<"Game Over!!!\n"<<std::endl;
            std::cout<<"Final Score:"<<std::endl;
            std::cout<<"-------------------"<<std::endl;
            std::cout<<"You: "<<std::right<<std::setw(14)<<player<<std::endl;
            std::cout<<"Computer: "<<std::right<<std::setw(9)<<computer<<std::endl;
            player = 0;
            computer = 0;
            isRunning = false;
        }
        else
        {
            std::string option = "";
            std::cout<<"Your turn..."<<std::endl;
            Card playerCard = deck.deal();
            playerCard.printCard();
            std::cout<<"My turn..."<<std::endl;
            Card computerCard = deck.deal();
            computerCard.printCard();
            if(playerCard.getVal() > computerCard.getVal())
            {
                std::cout<<"You won this round!!!"<<std::endl;
                player++;
            }
            else if(playerCard.getVal() < computerCard.getVal())
            {
                std::cout<<"I won this round!!!"<<std::endl;
                computer++;
            }
            else
            {
                std::cout<<"It's a tie"<<std::endl;
            }
            std::cout<<"\nScore:"<<std::endl;
            std::cout<<"-------------------"<<std::endl;
            std::cout<<"You: "<<std::right<<std::setw(14)<<player<<std::endl;
            std::cout<<"Computer: "<<std::right<<std::setw(9)<<computer<<std::endl;
            std::cout<<"-Continue?- Yes or No  ";
            std::cin>>option;
            if(option == "Yes" || option == "yes" || option == "Y" || option == "y" || option == "1")
            {
                std::cout<<std::endl;
            }
            else if(option == "No" || option == "no" || option == "N" || option == "n" || option == "2")
            {
                std::cout<<"-Returning to Main Menu-\n"<<std::endl;
                isRunning = false;
            }
            else
            {
                std::cout<<"-Invalid Input-\n-Returning to Main Menu-\n"<<std::endl;
                isRunning = false;
            }
        }
    }
    
}
