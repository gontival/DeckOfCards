#include <iostream>
#include <exception>
#include "Card.h"
#include "Deck.h"

// 4 suits : s : Spades, h : Heart, d: Diamond, c: Clubs

// 52 cards per decks
// 1 or more decks


// random card rand() with current time
//void shuffle_deck();

// deal a single card from the deck and reduce the number of card of the deck by 1
//const Card & deal_card()

// Create a new deck with n cards
//void new_deck();

int main() {

	printf("/-------------- DeckOfCards----------------- /\n");
	char jlDeckName[] =  "jlDeck" ;
	Deck d1(jlDeckName);
	std::cout << "size: " << d1.deck_size() << std::endl;

	 d1.shuffle_deck();
	/*Card c = d1.deal_card();*/
	/*c.showName();*/
	

	return 0;
}
