#include <iostream>
#include "Deck.h"
using namespace std;

card::card() //Dafault constructor
{

}

card::card(string cardFace, string cardSuit)//constructor 2 parameters
{
    face = cardFace;
    suit = cardSuit;
}

string card::print()//how the card will be displayed
{
    return("[" + face + " of " + suit + "]");
}

deckFull::deckFull()//assign the 52 cards
{
    //faces and suits values in a array (string)
    string faces[] = {"Ace", "2", "3", "4", "5", "6", "7", "8", "9", "10", "Jack", "Queen", "King"};
    string suits[] = {"Hearts", "Diamonds", "Clubs", "Spades"};

    deck = new card[SIZE];//initalise deck from card class to a new array using 'new'
    currentCard = 0;
    for(int count = 0; count < SIZE; count++)
    {
        deckFull[count] = card(faces[count % 13], suits[count / 13]);
    }
}

//Shuffle deck once cards are assigned
void deckFull::shuffle()
{
    currentCard = 0;//start @ current
    for(in first = 0; first < SIZE; first++)//all 52 cards are shuffled
    {
        int second = (rand() + time(0)) % SIZE;//int second = random opperator
        card temp = deckFull[first]; //deck at first position
        deckFull[first] = deckFull[second] //swap deck at first and second position
        deckFull[second] = temp;
    }
}
card deckFull::dealCard()
{
    if (currentCard > SIZE) //All cards in deck used
    {
        shuffle();//shuffle
    }
    if (currentCard < SIZE)//cards remaining in deck
    {
        return(deckFull[currentCard++]);
    }
    return (deckFull[0]);//return first card in deck
}
