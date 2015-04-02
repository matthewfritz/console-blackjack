/**
 * Deck.cpp
 * Handles the representation of a deck of cards.
 *
 * @author Matthew Fritz
 * @version 1.0
 */

#include <vector>
#include <random>
#include <algorithm>
#include "Card.cpp"

class Deck {
private:
	vector<Card> cards;
	vector<Card> drawn;

	// randomization attributes
	random_device rd;
    mt19937 g;

public:
	/**
	 * Default constructor for Deck.
	 */
	Deck() {
		// uses this attribute for shuffling
		g = mt19937(rd());
	}

	/**
	 * Adds a card to the deck.
	 *
	 * @param Card c The card to add
	 * @return void
	 */
	void add(Card c) {
		cards.push_back(c);
	}

	/**
	 * Returns how many cards are left in the deck.
	 *
	 * @return int
	 */
	int cardsLeft() {
		return cards.size();
	}

	/**
	 * Removes and returns a card from the top of the deck.
	 *
	 * @return Card
	 */
	Card draw() {
		Card c = cards.front();
		cards.erase(cards.begin());
		drawn.push_back(c);
		return c;
	}

	/**
	 * Returns whether this deck has cards left.
	 *
	 * @return bool
	 */
	bool hasCardsLeft() {
		return cardsLeft() > 0;
	}

	/**
	 * Places all drawn cards back into the deck.
	 *
	 * @return void
	 */
	void reset() {
		// ensure some cards have already been drawn
		if(drawn.size() > 0) {
			// grab an interator at the beginning of the drawn cards
			vector<Card>::iterator it;
			it = drawn.begin();

			// insert everything from the drawn vector into the cards vector
			// at the head of the cards vector
			cards.insert(it, drawn.begin(), drawn.end());

			// remove everything from the drawn cards vector
			drawn.clear();
		}
	}

	/**
	 * Places all cards back into the deck and shuffles them.
	 *
	 * @return void
	 */
	void shuffle() {
		// place all cards back into the deck first
		reset();

		// shuffle the cards
		std::shuffle(cards.begin(), cards.end(), g);
	}
};