#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include <string.h>

#include "card.h"

//____________________
//
// PRINTING MODULE
//____________________

typedef struct {
	card_t cards[CURRENT_HANDS][CURRENT_CARDS_PER_HAND];
	uint8_t cardNum;
	uint8_t hands;
}printing;
printing* printer;

//Update cards to print
void PrintCards(card_t cardArray[CURRENT_HANDS][CURRENT_CARDS_PER_HAND], uint8_t size, uint8_t hands);

// PRIVATE FUNCTIONS PROTOTYPES
static void Print();