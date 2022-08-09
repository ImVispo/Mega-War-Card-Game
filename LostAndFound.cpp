#include "LostAndFound.h"
#include <map>

using namespace std;

bool LostAndFound::play(vector<Player>& players) {

  // vector<Card> playCards;
  static map <int, Player&> playPlayers;

  for (Player &p: players) {
    // draw a card
    int size = p.getCardSize();
    if (p.getCardSize() > 0) {
      Card current = p.remove();
      cards.push_back(current);
      playPlayers.insert(pair<int, Player&>(current.getValue(), p));
    }
  }

  int maxValue = 0;
  Player *winner;
  map <int, Player&>:: iterator it;
  for (it = playPlayers.begin(); it != playPlayers.end(); it++) {
    int value = it->first;
    if (value > maxValue) {
      maxValue = value;
      winner = &it->second;
    } else if (value == maxValue) {
      return true;
    }
  }

  winner->addBattlesWon();
  for (Card c: cards) {
    winner->add(c);
  }
  for (Player &p: players) {
    p.addBattlesPlayed();
  }

  return false;
}