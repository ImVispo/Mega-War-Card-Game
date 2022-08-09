## Mega War Card Game

War is a simple card game, typically played by two players using a standard playing card deck. In this version called "Mega War" it can be played with as many players as you want. The implementation has defaulted to 4 players, but this can be changed. The deck is divided evenly, with each player receiving 26 cards, dealt one at a time, face down. Anyone may deal first. Each player places their stack of cards face down, in front of them.

Each player turns up a card at the same time and the player with the higher card takes both cards and puts them, face down, on the bottom of his stack.

If the cards are the same rank, it is War. Each player turns up one card face down and one card face up. The player with the higher cards takes both piles (six cards). If the turned-up cards are again the same rank, each player places another card face down and turns another card face up. The player with the higher card takes all 10 cards, and so on.

### Implementation

`main.cpp` Creates 4 players and automatically begins battling (war). The program will automatically handle battles (including ties), until 1 player has all the cards. 
