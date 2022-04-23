#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>

#include "card.h"
#include "cardPrinting.h"

int main(void) {
	srand(time(NULL));
	
	hand_t * deck = Card_CreateDeck();
	PrintHand(deck);

	system("pause");
	return 0;
}