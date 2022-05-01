#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "cardPrinting.h"

void PrintAllHands(deck_t* hands, uint8_t size)
{
	for (int i = 0; i < size; i++) {
		PrintHand(&hands[i]);
	}
}

void PrintHand(deck_t* hand)
{
	for (int i = 0; i < hand->n_cards; i++)
	{
		printf("Suit: %d Value: %d \t", hand->cards[i]->suit, hand->cards[i]->value);
	}
	printf("\n");

}