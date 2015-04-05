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
	int howManyAces;

public:
	/**
	 * Default constructor for Hand.
	 */
	Hand() {
		howManyAces = 0;
	}

	/**
	 * Adds the card to the hand.
	 *
	 * @return void
	 */
	void add(Card c) {
		cards.push_back(c);

		// if the card added is an Ace then add another Ace to the count
		if(c.getValue() == 1) {
			howManyAces++;
		}
	}

	/**
	 * Calculates and returns the total value of the cards in the hand.
	 *
	 * @return int
	 */
	int calculate() {
		int total = 0;

		// grab the iterator for the hand
		vector<Card>::iterator it;

		// iterate over the cards
		for(it = cards.begin(); it != cards.end(); ++it) {
			Card c = *it;
			if(c.getValue() >= 2 && c.getValue() < 10) {
				// regular card
				total += c.getValue();
			}
			else if(c.getValue() >= 10) {
				// face card
				total += 10;
			}
		}

		// Aces are a special case so they need to be calculated differently
		for(int i = 0; i < howManyAces; i++) {
			// if valuing an Ace at 11 would cause an overflow for the maximum
			// hand value, only value it at 1; otherwise value it at 11
			if((total + 11) > MAX_HAND_VALUE) {
				total++;
			}
			else
			{
				total += 11;
			}
		}

		return total;
	}

	/**
	 * Returns an integer based on a comparison of hand values.
	 *
	 * >0: This hand has a greater value than the parameter
	 * 0: This hand has the same value as the parameter
	 * <0: This hand has a lesser value than the parameter
	 */
	int compare(Hand h) {
		return calculate() - h.calculate();
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