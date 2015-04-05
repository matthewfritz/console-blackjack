/**
 * Game.cpp
 * Handles the operation of the game logic.
 *
 * @author Matthew Fritz
 * @version 1.0
 */

#include <iostream>
#include "Hand.cpp"

// suit constants for the cards
const Suit SUIT_CLUB(1, 'c');
const Suit SUIT_DIAMOND(2, 'd');
const Suit SUIT_HEART(3, 'h');
const Suit SUIT_SPADE(4, 's');

class Game {
public:
	/**
	 * Default constructor for Game.
	 */
	Game() {

	}

	/**
	 * Runs the game loop.
	 *
	 * @return void
	 */
	void run() {
		cout << "This is where the game loop would be." << endl;
	}

	/**
	 * Runs some basic tests.
	 *
	 * @return void
	 */
	void runTests() {
		// create some sample cards
		Card c(3, SUIT_CLUB);
		Card c2(1, SUIT_CLUB);
		Card c3(3, SUIT_DIAMOND);
		Card c4(8, SUIT_SPADE);

		cout << "Created 4 sample cards" << endl;

		cout << "C/C2 Same suit: " << c.sameSuit(c2) << endl;
		cout << "C/C3 Same value: " << c.sameValue(c3) << endl;
		cout << "C/C2 Same value: " << c.sameValue(c2) << endl;

		// create a sample deck
		Deck d;
		d.add(c);
		d.add(c2);
		d.add(c3);
		d.add(c4);

		cout << endl;
		cout << "There are " << d.cardsLeft() << " cards in the deck." << endl;

		// shuffle the deck
		d.shuffle();
		cout << "Shuffled the deck.";
		cout << endl << endl;

		// draw a card
		Card drawnCard = d.draw();
		cout << "Drew a " << drawnCard.toString() << " from the deck." << endl;
		cout << "There are now " << d.cardsLeft() << " cards in the deck." << endl;
		cout << endl;

		// reset the deck
		d.reset();
		cout << "Reset the deck. There are now " << d.cardsLeft() << " cards in the deck." << endl;
		cout << endl;

		// create a hand
		Hand h;
		h.add(c);
		h.add(c2);
		h.add(c3);
		h.add(c4);

		cout << "A hand with all above cards is primarily valued at " << h.calculate() << endl;

		cout << endl;
	}
};