#include <stdlib.h>
#include "card.h"

/************************************
 * PUBLIC FUNCTION DEFINITIONS
 ************************************/

/**
 * @brief Creates a random card
 */
card_t Card_CreateRandomCard(void)
{
	uint8_t num = rand() % MAX_CARDS_IN_DECK;
	return Card_CreateCardFromNum(num);
}

/**
 * @brief Creates a card from a number (0 - MAX_CARDS_IN_DECK)
 */
card_t Card_CreateCardFromNum(uint8_t n)
{
	card_t c;
	c.suit = n / 13;
	c.value = n % 13 + 2;
	return c; 
}