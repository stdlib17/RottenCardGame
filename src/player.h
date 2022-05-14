#ifndef PLAYER_H
#define PLAYER_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "deck.h"

/******************************************************
 * DEFINES AND TYPES                  
 ******************************************************/
#define MAX_PLAYERS 8
#define MIN_PLAYERS 3

typedef struct{
  deck_t hand;
  uint8_t bid;

  uint8_t pts;
  uint8_t roundsWon;
} player_t;

/******************************************************
 * PUBLIC FUNCTION PROTOTYPES                  
 ******************************************************/


#endif /* PLAYER_H */
