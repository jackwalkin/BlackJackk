#include <iostream>
#include "Deck.h"
using namespace std;

int i;//i didnt know where to put it in the header

int main()
{
    deckFull deck; //deckFull (from class) is deck
    card currentCard;//current card
    string printCurrent;//need to print as strong not int
    deck.shuffle()//shuffle initalised deck
    for(i = 0; i <= 2; i++)
    {
        currentCard = deck.dealCard();
        printCurrent = currentCard.print();
        cout<< printCurrent << endl;
    }
    return 0;
}
