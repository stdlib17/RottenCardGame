#include "deck.h"
#include "player.h"
#include <assert.h>

/******************************************************
 * PUBLIC FUNCTION DEFINITIONS
 ******************************************************/

deck_t * Deck_CreateGameDeck(void)
{
	deck_t * deck = malloc(sizeof(*deck));
	deck->cards = NULL;
	deck->n_cards = 0;

	for(int i = 0; i < MAX_CARDS_IN_DECK; i++){
		Deck_AddCardTo(deck, Card_CreateCardFromNum(i));
	}

	return deck;
}

void Deck_AddCardTo(deck_t * deck, card_t c)
{
    deck->n_cards++;
	deck->cards = realloc(deck->cards, deck->n_cards * sizeof(*deck->cards));
    card_t * newCard = malloc(sizeof(newCard));

    newCard->suit = c.suit;
    newCard->value = c.value;
	deck->cards[deck->n_cards - 1] = newCard;
}

void Deck_Shuffle(deck_t * deck)
{
	uint8_t randNum;
	card_t * temp;
	for (size_t i = 0; i < DECK_SHUFFLE_TIMES; i++){
		for (size_t j = 0; j < deck->n_cards; j++){
			randNum = rand() % deck->n_cards;
			temp = deck->cards[j];
			deck->cards[j] = deck->cards[randNum];
			deck->cards[randNum] = temp;
		}
	}
}

void Deck_PrintAllHands(deck_t* hands, uint8_t size)
{
	for (int i = 0; i < size; i++) {
		Deck_PrintHand(&hands[i]);
	}
}

void Deck_PrintHand(deck_t* hand)
{
	for (int i = 0; i < hand->n_cards; i++)
	{
		Card_PrintCard(hand->cards[i]);
	}
	printf("\n");

}
