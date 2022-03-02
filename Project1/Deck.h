#pragma once
#include "Card.h"

/* A deck is made of 52 cards */
constexpr size_t deckSize = 52;

class Deck
{
	Card cards[deckSize];

public:

	Deck()
	{
	}

	virtual ~Deck()
	{
	}
};

