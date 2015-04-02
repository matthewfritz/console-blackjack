/**
 * Suit.cpp
 * Handles the representation of a suit on a card.
 *
 * @author Matthew Fritz
 * @version 1.0
 */

class Suit {
private:
	int value;
	char display;

public:
	/**
	 * Default constructor for Suit.
	 */
	Suit() {

	}

	/**
	 * Constructs a new Suit object with the specified value and display character.
	 *
	 * @param int value The value of the suit
	 * @param char display The display character of the suit
	 */
	Suit(int value, char display) {
		this->value = value;
		this->display = display;
	}

	/**
	 * Returns the display character of the suit.
	 *
	 * @return char
	 */
	char getDisplay() {
		return display;
	}

	/**
	 * Returns the value of the suit.
	 *
	 * @return int
	 */
	int getValue() {
		return value;
	}
};