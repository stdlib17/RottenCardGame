#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "card.h"

card_t CreateRandomCard()
{
	card_t c;
	c.value = rand() % MAX_CARD_VALUE + 1;
	c.suit = rand() % NUM_SUITS;

	return c;
}
