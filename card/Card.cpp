/**
 * Card.cpp
 * Representation of a card in the application.
 *
 * @author Matthew Fritz
 * @version 1.0
 */

#include <iostream>
#include <string>
#include "Suit.cpp"

using namespace std;

class Card {
private:
	int value;
	Suit suit;

public:
	/**
	 * Default constructor for Card.
	 */
	Card() {

	}

	/**
	 * Constructs a new Card with the specified value and suit.
	 *
	 * @param int value The value of the card
	 * @param Suit suit The suit on the card
	 */
	Card(int value, Suit suit) {
		this->value = value;
		this->suit = suit;
	}

	/**
	 * Returns an integer based on a comparison of card values.
	 *
	 * >0: This card has a greater value than the parameter
	 * 0: This card has the same value as the parameter
	 * <0: This card has a lesser value than the parameter
	 */
	int compare(Card c) {
		return value - c.getValue();
	}

	/**
	 * Returns a string representation of the card.
	 *
	 * @return string
	 */
	string toString() {
		string s("");

		// the value may need to be displayed differently so perform the
		// value check first
		if(value == 1) {
			s += 'A';
		}
		else
		{
			s += to_string(value);
		}

		s += toupper(suit.getDisplay());
		return s;
	}

	/**
	 * Returns the value associated with the card.
	 *
	 * @return int
	 */
	int getValue() {
		return value;
	}

	/**
	 * Returns whether the suit of the provided card is the same as this card.
	 *
	 * @param Card c The card to compare with this card
	 * @return bool
	 */
	bool sameSuit(Card c) {
		return c.suit.getValue() == suit.getValue();
	}

	/**
	 * Returns whether the value of the provided card is the same as this card.
	 *
	 * @param Card c The card to compare with this card
	 * @return bool
	 */
	bool sameValue(Card c) {
		return c.getValue() == value;
	}
};