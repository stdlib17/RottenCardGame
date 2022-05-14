#ifndef DECK_H
#define DECK_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "card.h"

/************************************
 * DEFINES AND TYPES                  
 ************************************/
#define DECK_SHUFFLE_TIMES 10000

typedef struct{
  card_t ** cards;
  uint8_t n_cards; 
} deck_t;

/************************************
 * PUBLIC FUNCTION PROTOTYPES                  
 ************************************/
deck_t * Deck_CreateGameDeck(uint8_t players);
deck_t * Deck_CreateDeckExclude(deck_t * excluded);
void Deck_AddCardTo(deck_t * deck, card_t c);
void Deck_Shuffle(deck_t * deck);

#endif /* DECK_H */