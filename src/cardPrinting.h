#ifndef _CARDPRINTING_H_
#define _CARDPRINTING_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "card.h"

/************************************
 * DEFINES                  
 ************************************/

typedef struct {
	card_t cards[CURRENT_HANDS][CURRENT_CARDS_PER_HAND];
	int cardNum;
	int hands;
}printing;
printing printer;

/************************************
 * PUBLIC FUNCTION PROTOTYPES                  
 ************************************/

//Update cards to print
void PrintCards(card_t cardArray[CURRENT_HANDS][CURRENT_CARDS_PER_HAND], int size, int hands);

/************************************
 * PRIVATE FUNCTION PROTOTYPES                  
 ************************************/
static void Print();


#endif _CARDPRINTING_H_