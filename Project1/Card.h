#pragma once
#include <iostream>

constexpr size_t nameSize = 3;

/* Card rank. Possible values are : A for Ace, 2, 3, ..., 9, T for Ten, J for Jack, Q for Queen, K for King.
*/
enum Rank { A = 1, two, three, four, five, six, seven, eight, nine, T, J, Q, K };

/* Card suit. Possible values are : D for Diamonds, C for Clubs, H for Hearts, S for Spades
*/
enum Suit { D = 1, C, H, S };

/** A playing card with a suit and a rank.
*/
class Card
{
	Rank _rank;
	Suit _suit;
	char _name[nameSize];

public:
	Card();
	Card(const Suit suit, const Rank rank);
	virtual ~Card();

	/* Getters and Setters*/
	Suit getSuit() { return _suit; }
	Rank getRank() { return _rank; }
	char* getName() { return _name; }

	void setSuit(Suit suit) { _suit = suit; }
	void setRank(Rank rank) { _rank = rank; }
	void setName() {
		std::cout << "setName entry " << std::endl;
		std::cout << "before switch suit" << _suit << std::endl;

		_name[0] = switchRank();
		_name[1] = switchSuit();
		_name[2] = '\0';

		std::cout << "rank : " << _name[0] << std::endl;
		std::cout << "suit : " << _name[1] << std::endl;
	}

	char switchSuit() {
		std::cout << "switchSuit entry suit: " << _suit << std::endl;
		switch (_suit) {
		
		case D: return 'D';
		case C: return 'C';
		case H: return 'H';
		case S: return 'S';
		default: return 'X';
		}
	}

	char switchRank() {
		std::cout << "switchRank entry rank: " << _rank << std::endl;
		switch (_rank) {
		case A: return 'A';
		case two: return '2';
		case three: return '3';
		case four: return '4';
		case five: return '5';
		case six: return '6';
		case seven: return '7';
		case eight: return '8';
		case nine: return '9';
		case T: return 'T';
		case J: return 'J';
		case Q: return 'Q';
		case K: return 'K';
		default: return 'X';
		}
	}
	
	void showName() {
		std:: cout << "card : " << getName() << std::endl;
	}
};

