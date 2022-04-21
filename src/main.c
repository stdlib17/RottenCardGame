#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "card.h"
#include "cardPrinting.h"

int main() {
	
	card_t cardArray[CURRENT_HANDS][CURRENT_CARDS_PER_HAND];
	for (int i = 0; i < CURRENT_HANDS; ++i) {
		for (int j = 0; j < CURRENT_CARDS_PER_HAND; ++j) {
			cardArray[i][j] = CreateRandomCard();
		}
	}
	
	PrintCards(cardArray, CURRENT_CARDS_PER_HAND, CURRENT_HANDS);

	return 0;
}