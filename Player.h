#pragma once

#include "CardPile.h"

class Player: public CardPile {
  private:
    int battlesPlayed;
    int battlesWon;
  public:
    double getFierceness();
    int getCardSize();
    void addBattlesPlayed(int i = 1);
    void addBattlesWon(int i = 1);
    int getBattlesPlayed();
    int getBattlesWon();
};