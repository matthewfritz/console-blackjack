# console-blackjack
A small command-line teaching game to demonstrate programming concepts in C++ under the guise of a Blackjack game.

This application is compiled with GCC 4.2.1 in Mac OS/X 10.10 x64 during development. However, as long as you have GCC you should be fine; there isn't anything crazy going on in the source.

Since it's a C++ program you have to use g++ and not gcc:

	g++ Blackjack.cpp

After compiling, you should see the following filename (unless you use the -o flag):

	a.out

There are also command-line parameters you can specify prior to execution when you compile the source:

	--tests 	Run the tests of the underlying objects to ensure compatibility

For example, if you wanted to run the application with its tests you would run:

	./a.out --tests