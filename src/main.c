#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <time.h>

#include "card.h"
#include "cardPrinting.h"

int main(void) {
	srand(time(NULL));
	
	deck_t excludedCards;
	excludedCards.cards = NULL;
	excludedCards.n_cards = 0;

	deck_t * deck = Deck_CreateDeckExclude(&excludedCards);
	CardPrinting_PrintHand(deck);
	Deck_Shuffle(deck);
	printf("\n\n");
	CardPrinting_PrintHand(deck);


	system("pause");
	return 0;
}