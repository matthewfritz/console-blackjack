/**
 * Hand.cpp
 * Handles the representation of a hand of cards.
 *
 * @author Matthew Fritz
 * @version 1.0
 */

// defines the highest possible value for a hand
const int MAX_HAND_VALUE = 21;

class Hand {
private:
	vector<Card> cards;
	bool hasAce;

public:
	/**
	 * Default constructor for Hand.
	 */
	Hand() {
		hasAce = false;
	}

	/**
	 * Adds the card to the hand.
	 *
	 * @return void
	 */
	void add(Card c) {
		cards.push_back(c);

		// is this card an Ace?
		if(c.getValue() == 1) {
			// this hand now has an Ace so the calculation of the overall
			// hand value may be affected
			hasAce = true;
		}
	}

	/**
	 * Calculates the total value of the cards in the hand.
	 *
	 * @return int
	 */
	int calculate() {
		return 1;
	}

	/**
	 * Returns the number of cards in this hand.
	 *
	 * @return int
	 */
	int getCardCount() {
		return cards.size();
	}
};