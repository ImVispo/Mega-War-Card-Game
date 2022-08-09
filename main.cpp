#include <iostream>
#include <climits>
#include <string>
#include "math.h"

#include "Deck.h"
#include "Player.h"
#include "War.h"
#include "LostAndFound.h"

using namespace std;

void printPlayers(int battle, vector<Player> players);

int main() {

  // create vector of players
  vector<Player> players;
  for(int i = 0; i < 5; i++){
    players.push_back(Player());
  }

  // create new deck
  Deck deck = Deck(3);
  deck.shuffle();

  // battles played
  int battleCount = 0;

  // give everyone cards
  int cardCount = floor(deck.getCardSize() / 5);
  for(int i = 0; i < cardCount; i++){
    for(int k = 0; k < players.size(); k++){
      players[k].add(deck.remove());
    }
  }

  // give away extra cards
  int cardsRemaining = deck.getCardSize();
  for(int i = 0; i < cardsRemaining; i++){
    for(int k = 0; k < players.size(); k++){
      if(cardsRemaining <= 0)
        break;
      cardsRemaining--;
      players[k].add(deck.remove());
    }
  }

  // print player stats
  printPlayers(battleCount, players);

  // play
  bool playing = true;
  while (playing) {
    LostAndFound l;
    bool tie = l.play(players);
    battleCount++;
    printPlayers(battleCount, players);
    // if tie occurs, battle!
    if (tie) {
      War w;
      w.battle(players);
      battleCount++;
    }
    for (Player p: players) {
      if (p.getCardSize() == 156) {
        playing = false;
      }
    }
  }
}

void printPlayers(int battle, vector<Player> players){
  cout << "Battle " << battle << endl;
  for(int i = 0; i < players.size(); i++){
    cout << "\tPlayer " << i << ": Fierceness: = " << players[i].getFierceness() << "\t" << "Cards = " << players[i].getCardSize() << "\tBattles = " << players[i].getBattlesPlayed() << "\tWon = " << players[i].getBattlesWon() << endl;
  }
}