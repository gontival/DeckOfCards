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

// utility functions
//int remaining();
//int deck_size();

// pointer to the array of cards
//const Card * deck();

int main() {

	printf("/-------------- DeckOfCards----------------- /\n");
	Rank r1 = A;
	Suit s1 = S;

	Card c1(s1, r1);
	c1.showName();

	Rank r2 = two;
	Suit s2 = D;
	Card c2(s2, r2);
	c2.showName();

	return 0;
}
