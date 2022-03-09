#include <iostream>
#include <exception>
#include "Card.h"
#include "Deck.h"

// 4 suits : s : Spades, h : Heart, d: Diamond, c: Clubs

// 52 cards per decks
// 1 or more decks


int main() {

	printf("/-------------- DeckOfCards----------------- /\n");
	char jlDeckName[] =  "jlDeck" ;
	Deck d1(jlDeckName);
	int nbCardToDeal = 52;

	std::cout << "size: " << d1.deck_size() << std::endl;

	 d1.shuffle_deck();

	 for (int i = 0; i < nbCardToDeal; i++) {
		 Card c = d1.deal_card();
		 c.showName();

		 std::cout << "remaining cards : " << d1.deck_size() << std::endl;
	 }
	

	return 0;
}
