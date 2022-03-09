#pragma once
#include <iostream>
#include "Card.h"

/* A deck is made of 52 cards */
constexpr size_t deckSize = 52;

constexpr size_t deckNameSize = 100;

class Deck
{
	Card _cards[deckSize];
	char _name[deckNameSize];

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
};

