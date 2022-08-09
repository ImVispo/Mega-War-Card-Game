#pragma once

#include "Player.h"
#include <vector>

class LostAndFound: public CardPile {
  public:
    bool play(vector<Player> & players);
};