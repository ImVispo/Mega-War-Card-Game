#include "War.h"
#include <map>

using namespace std;

void War::battle(vector<Player>& players) {

  vector<Card> battleCards;
  static map <int, Player&> battlePlayers;

  for (Player &p: players) {
    // draw 4 cards, or if player has less than 4 cards then draw remaining cards
    int size = 4;
    if (p.getCardSize() < 4) {
      size = p.getCardSize();
    }

    if (size > 0) {
      // draw for battle card and add drawn cards to war pile
      Card battleCard;
      for (int i = size; i >= 0; i--) {
        // cout << i << endl;
        Card current = p.remove();
        cards.push_back(current);
        if (i == 0) {
          battleCard = current;
        }
      }
      battleCards.push_back(battleCard);
      battlePlayers.insert(pair<int, Player&>(battleCard.getValue(), p));
    }
  }

  int maxValue = 0;
  Player *winner;
  map <int, Player&>:: iterator it;
  for (it = battlePlayers.begin(); it != battlePlayers.end(); it++) {
    int value = it->first;
    if (value > maxValue) {
      maxValue = value;
      winner = &it->second;
    }
  }

  winner->addBattlesWon();
  for (Card c: cards) {
    winner->add(c);
  }
  for (Player &p: players) {
    p.addBattlesPlayed();
  }

}