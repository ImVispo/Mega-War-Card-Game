#pragma once

#include "Player.h"
#include <vector>

class War: public CardPile {
  public:
    void battle(vector<Player> & players);
};