#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>

#include "deck.h"

int main(void) {
	srand(time(NULL));

	deck_t * deck = Deck_CreateGameDeck();

	Deck_PrintHand(deck);
	Deck_Shuffle(deck);
	printf("\n\n");
	Deck_PrintHand(deck);


	system("pause");
	return 0;
}
