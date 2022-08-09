#include "CardPile.h"

class Deck: public CardPile{
  public:
    Deck(int size = 1);
    void shuffle();
};