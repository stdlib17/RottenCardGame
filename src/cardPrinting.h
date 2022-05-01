#ifndef CARDPRINTING_H
#define CARDPRINTING_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "deck.h"

/************************************
 * DEFINES                  
 ************************************/

/************************************
 * PUBLIC FUNCTION PROTOTYPES                  
 ************************************/
void PrintAllHands(deck_t* hands, uint8_t size);
void PrintHand(deck_t* hand);

/************************************
 * PRIVATE FUNCTION PROTOTYPES                  
 ************************************/


#endif /* CARDPRINTING_H */