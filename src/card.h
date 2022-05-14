#ifndef CARD_H
#define CARD_H

#include <stdint.h>

/******************************************************
 * DEFINES                  
 ******************************************************/

// Temporal defines
#define CURRENT_HANDS 10
#define CURRENT_CARDS_PER_HAND 5
//
#define MAX_CARDS_IN_DECK 52
#define MAX_HANDS 6
#define MAX_CARDS_PER_HAND 8

#define VALUE_ACE 14
#define VALUE_KING 13
#define VALUE_QUEEN 12
#define VALUE_JACK 11

typedef enum{
  CLUBS,
  DIAMONDS,
  SPADES,
  HEARTS,
  NUM_SUITS,
} eSuit;

typedef struct{
  uint8_t value;
  eSuit suit;
} card_t;

/******************************************************
 * PUBLIC FUNCTION PROTOTYPES
 ******************************************************/
card_t Card_CreateRandomCard(void);
card_t Card_CreateCardFromNum(uint8_t n);

void Card_PrintCard(card_t* card);

#endif /* CARD_H */
