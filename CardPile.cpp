#include "CardPile.h"

using namespace std;

CardPile::CardPile() {
  // cards.push_back(Card('A', 'S'));
};

void CardPile::add(char r, char s) {
  cards.push_back(Card(r, s));
};

void CardPile::add(Card card){
  cards.push_back(card);
};

Card CardPile::remove() {
  Card topCard = cards.at(cards.size()-1);
  // topCard.printCard();
  cards.pop_back();
  return topCard;
};

void CardPile::print() {
  for (int i = cards.size() - 1; i >= 0; i--) {
    cards.at(i).printCard();
  }
};

int CardPile::getCardSize(){
  return cards.size();
};