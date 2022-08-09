#pragma once

#include <string>

class Card {
  private:
    char rank;
    char suit;
  public:
    Card();
    Card(char r, char s);
    void setRank(char r);
    char getRank();
    void setSuit(char s);
    char getSuit();
    int getValue();
    void printCard();
    // heart, spade, diamond, club
};