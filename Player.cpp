#include "Player.h"

double Player::getFierceness(){
  double total = 0;
  if (cards.size() == 0) {
    return 0;
  }
  for(int i = 0; i < cards.size(); i++){
    total += cards[i].getValue();
  }
  return total / cards.size();
};

int Player::getCardSize(){
  return cards.size();
}

void Player::addBattlesPlayed(int i){
  battlesPlayed += i;
}

int Player::getBattlesPlayed(){
  return battlesPlayed;
}

void Player::addBattlesWon(int i){
  battlesWon += i;
}

int Player::getBattlesWon(){
  return battlesWon;
}