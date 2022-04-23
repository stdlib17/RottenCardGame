#ifndef _CARD_H_
#define _CARD_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

/************************************
 * DEFINES                  
 ************************************/

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

typedef struct{
  card_t ** cards;
  uint8_t n_cards; 
} hand_t;

/************************************
 * PUBLIC FUNCTION PROTOTYPES                  
 ************************************/
hand_t* Card_CreateDeck();
card_t Card_CreateRandomCard();


#endif _CARD_H_