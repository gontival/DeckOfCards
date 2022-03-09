#pragma once
#include <iostream>
#include "Card.h"
#include <stdlib.h>     /* srand, rand */
#include <time.h>       /* time */


/* A deck is made of 52 cards */
constexpr size_t deckSize = 52;

constexpr size_t deckNameSize = 100;

class Deck
{
	Card _cards[deckSize];
	char _name[deckNameSize];
	int _remaining = 0;

public:


	/*Constructors */
	Deck()
	{
	}
	Deck(char* name)
	{
		int i = 0;
		for (int iRank = A; iRank <= K; iRank++) {
			for (int iSuit = D; iSuit <= S; iSuit++) {

				Rank r = static_cast<Rank>(iRank);
				Suit s = static_cast<Suit>(iSuit);

				Card c(s, r);
				c.showName();
				_cards[i++] = c;
			}
		}
		setName(name);
		_remaining = i;
		std::cout << "Deck " << _name << " created" << std::endl;
	}

	virtual ~Deck()
	{
	}

	/**
	* Getters and Setters
	**/

	void setName(char* name) {
		for (int j = 0; j < sizeof(name); j++) {
			_name[j] = name[j];
		}
		_name[sizeof(name)] = '\0';
	}

	/**
	Pointer to the array of cards
	**/
	const Card* deck() {
		Card* cards = _cards;
	};

	/**random card rand() with current time**/
	void shuffle_deck() {
		// Initialize a random seed
		srand(time(NULL));

		/* generate a random number between 0 and 52*/
		int random = rand() % deckSize;
		for (int i = 0; i < deckSize; i++) {
			
			std::cout << "Before switch card[" << i << "]=" << std::endl;
			_cards[i].showName();
			
			Card cTemp= _cards[i];

			// Switch the cards
			_cards[i] = _cards[random];
			_cards[random] = cTemp;

			std::cout << "After switch card[" << i << "]="  << std::endl;
			_cards[i].showName();
		}
	}

	// deal a single card from the deck and reduce the number of card of the deck by 1
	const Card& deal_card() {
		// Take the last card of the deck 
		Card* c;
		c = &_cards[_remaining-1];

		// Reduce the number of remaining cards
		_remaining--;

		std::cout << "----- deal_card -----" << std::endl;
		c->getName();
		return *c;
	}

	/**Utility functions**/
	//int remaining(); => same as deck_size ?
	int deck_size() {
		//return sizeof(_cards) / sizeof(_cards[0]);
		return _remaining;
	}
};

