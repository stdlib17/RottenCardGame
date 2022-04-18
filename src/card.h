#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

/****************************
 * DEFINES                  *
 ****************************/

#define VALUE_ACE 14
#define VALUE_KING 13
#define VALUE_QUEEN 12
#define VALUE_JACK 11

typedef enum {
  CLUBS,
  DIAMONDS,
  SPADES,
  HEARTS,
  NUM_SUITS,
} eSuit;

typedef struct {
  uint8_t value;
  eSuit suit;
} card_t;