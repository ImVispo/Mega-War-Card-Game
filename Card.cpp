#include <iostream>
#include "Card.h"

using namespace std;

Card::Card(){
  rank = ' ';
  suit = ' ';
};

Card::Card(char r, char s){
  rank = r;
  suit = s;
};

void Card::setRank(char r){
  rank = r;
};

char Card::getRank(){
  return rank;
};

void Card::setSuit(char s){
  suit = s;
};

char Card::getSuit(){
  return suit;
};

int Card::getValue(){
  if (rank == 'A')
    return 1;
  else if (rank == '2')
    return 2;
  else if (rank == '3')
    return 3;
  else if (rank == '4')
    return 4;
  else if (rank == '5')
    return 5;
  else if (rank == '6')
    return 6;
  else if (rank == '7')
    return 7;
  else if (rank == '8')
    return 8;
  else if (rank == '9')
    return 9;
  else if(rank == 'T')
    return 10;
  else if(rank == 'J')
    return 11;
  else if(rank == 'Q')
    return 12;
  else if(rank == 'K')
    return 13;
  else
    return 0;
};

void Card::printCard(){
  cout << rank << " " << suit << endl;
};