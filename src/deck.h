#ifndef DECK_H
#define DECK_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "card.h"

/************************************
 * DEFINES                  
 ************************************/
typedef struct{
  card_t ** cards;
  uint8_t n_cards; 
} deck_t;

/************************************
 * PUBLIC FUNCTION PROTOTYPES                  
 ************************************/
deck_t * Deck_CreateDeckExclude(deck_t * excludedCards);
void Deck_AddCardTo(deck_t * deck, card_t c);

#endif /* DECK_H */