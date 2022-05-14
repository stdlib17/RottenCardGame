#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>

#include "card.h"
#include "cardPrinting.h"

int main(void) {
	srand(time(NULL));

	deck_t * deck = Deck_CreateGameDeck(4);
	CardPrinting_PrintHand(deck);
	Deck_Shuffle(deck);
	printf("\n\n");
	CardPrinting_PrintHand(deck);


	system("pause");
	return 0;
}
