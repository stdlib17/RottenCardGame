#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "cardPrinting.h"

//All cards array, size of hand, number of hands
void PrintCards(card_t cardArray[CURRENT_HANDS][CURRENT_CARDS_PER_HAND], int hands, int size) {

	//Setting printer
	printer.cardNum = size;
	printer.hands = hands;
	for (int i = 0; i < hands; ++i) {
		for (int j = 0; j < size; ++j) {
			printer.cards[i][j] = cardArray[i][j];
		}
	}
	
	//Print with printer
	Print();
}

void Print()
{
	for (int i = 0; i < printer.hands; ++i) {
		for (int j = 0; j < printer.cardNum; ++j) {
			printf("Suit: %c \t Value: %d", 't', 0);
		}
		printf("\n");
	}
}
