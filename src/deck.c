#include "deck.h"

/************************************
 * PUBLIC FUNCTION DEFINITIONS
 ************************************/

/**
 * @brief Creates a new deck excluding the cards from excludedCards deck
 */
deck_t * Deck_CreateDeckExclude(deck_t * excludedCards)
{
	deck_t * deck = malloc(sizeof(*deck));
	deck->cards = NULL;
	deck->n_cards = 0;

	for(int i = 0; i < MAX_CARDS_IN_DECK; i++)
	{
        Deck_AddCardTo(deck, Card_CreateCardFromNum(i));
	}
	deck->n_cards = MAX_CARDS_IN_DECK;
	return deck;
}

/**
 * @brief Adds card c to deck
 */
void Deck_AddCardTo(deck_t * deck, card_t c)
{
    deck->n_cards++;
	deck->cards = realloc(deck->cards, deck->n_cards * sizeof(*deck->cards));
    card_t * newCard = malloc(sizeof(newCard));
    newCard->suit = c.suit;
    newCard->value = c.value;
	deck->cards[deck->n_cards - 1] = newCard;
}