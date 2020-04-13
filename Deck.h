//#ifndef DECK_H
//#define DECK_H
#include <cstdlib>//random number generator
#include <ctime> // random number generator?
#include <iostream>
using namespace std;

#define SIZE 52 //initiaise constant variable (deck size)

class card
{
    public:
        card();//default constructor
        card(string cardFace, string cardSuit);
        string print();
    private:
        string face;//the two variables
        string suit;
};


class deckFull
{
    public:
        deckFull();//assign 52 cards to deck
        void shuffle();
        card dealCard();
    private:
        card deck[SIZE];//array of cars 52
        int currentCard;//keep track of current card
};


