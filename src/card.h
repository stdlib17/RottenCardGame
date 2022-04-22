#ifndef _CARD_H_
#define _CARD_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>



/****************************
 * DEFINES                  *
 ****************************/

//Temporal defines
#define CURRENT_HANDS 2
#define CURRENT_CARDS_PER_HAND 4
//

#define MAX_HANDS 6
#define MAX_CARDS_PER_HAND 8

#define VALUE_ACE 1
#define VALUE_KING 13
#define VALUE_QUEEN 12
#define VALUE_JACK 11

#define MAX_CARD_VALUE 13

typedef enum{
  CLUBS,
  DIAMONDS,
  SPADES,
  HEARTS,
  NUM_SUITS,
} eSuit;

typedef struct{
  int value;
  eSuit suit;
} card_t;

//Public functions
card_t CreateRandomCard();


#endif _CARD_H_