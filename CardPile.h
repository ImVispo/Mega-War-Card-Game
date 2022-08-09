#pragma once

#include <string>
#include <vector>
#include <iostream>
#include "Card.h"

using namespace std;

class CardPile {
  protected:
    vector<Card> cards;
  public:
    CardPile();
    void add(char r, char s);
    void add(Card card);
    Card remove();
    void print();
    int getCardSize();
};