#include "Deck.h"

char ranks[] = {'A', '2', '3', '4', '5', '6', '7', '8', '9', 'T', 'J', 'Q', 'K'};
char suits[] = {'S', 'C', 'H', 'D'};

Deck::Deck(int size){
  // create size amount of decks
  for(int i = 0; i < size; i++){
    for(int r = 0; r < 13; r++){
      for(int s = 0; s < 4; s++){
        add(ranks[r], suits[s]);
      }
    }
  }
};

void Deck::shuffle(){
  srand(time(0));
  int cardSize = getCardSize();
  for(int i = 0; i < cardSize; i++){
    int r = (rand() % (cardSize-1) + 1);
    Card currentCard = cards[i];
    cards[i] = cards[r];
    cards[r] = currentCard;
  }
};