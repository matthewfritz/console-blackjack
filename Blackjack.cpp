/**
 * Blackjack.cpp
 * Runs the main application.
 *
 * @author Matthew Fritz
 * @version 1.0
 */

#include <iostream>
#include <string>
#include "card/Deck.cpp"
#include "game/Game.cpp"

using namespace std;

/**
 * Main method that runs the application. Returns an integer upon completion.
 *
 * @return integer
 */
int main(int args, char** argv) {
	Game g;

	// iterate over the command-line arguments
	for(int i = 0; i < args; i++) {
		string command(argv[i]);
		if(command.compare("--tests") == 0) {
			// run the tests
			g.runTests();
			return 0;
		}
	}

	// run the game
	g.run();

	cout << endl;
	return 0;
}