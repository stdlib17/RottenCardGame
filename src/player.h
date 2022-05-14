#ifndef PLAYER_H
#define PLAYER_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "deck.h"

/************************************
 * DEFINES AND TYPES                  
 ************************************/
#define MAX_PLAYERS 8
 
typedef struct{
  deck_t hand;
  uint8_t pts;
  uint8_t rottenCnt;

} player_t;

/************************************
 * PUBLIC VARIABLES
 ************************************/
player_t Players[MAX_PLAYERS];

/************************************
 * PUBLIC FUNCTION PROTOTYPES                  
 ************************************/


#endif /* PLAYER_H */