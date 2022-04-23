#ifndef _CARDPRINTING_H_
#define _CARDPRINTING_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "card.h"

/************************************
 * DEFINES                  
 ************************************/



/************************************
 * PUBLIC FUNCTION PROTOTYPES                  
 ************************************/
void PrintAllHands(hand_t* hands, uint8_t size);
void PrintHand(hand_t* hand);

/************************************
 * PRIVATE FUNCTION PROTOTYPES                  
 ************************************/


#endif _CARDPRINTING_H_