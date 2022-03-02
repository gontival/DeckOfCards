#include "Card.h"

/** Constructors 
*/
Card::Card()
{
}

Card::Card(const Suit suit, const Rank rank) {
	setSuit(suit);
	setRank(rank);
	setName();
}

/*Destructor*/
Card::~Card()
{
}
