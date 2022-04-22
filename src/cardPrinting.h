#ifndef _CARDPRINTING_H_
#define _CARDPRINTING_H_

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "card.h"

//____________________
//
// PRINTING MODULE
//____________________

typedef struct {
	card_t cards[CURRENT_HANDS][CURRENT_CARDS_PER_HAND];
	int cardNum;
	int hands;
}printing;
printing printer;

//Update cards to print
void PrintCards(card_t cardArray[CURRENT_HANDS][CURRENT_CARDS_PER_HAND], int size, int hands);

// PRIVATE FUNCTIONS PROTOTYPES
static void Print();


#endif _CARDPRINTING_H_