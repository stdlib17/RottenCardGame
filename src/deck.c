#include "deck.h"

/************************************
 * PUBLIC FUNCTION DEFINITIONS
 ************************************/

deck_t * Deck_CreateGameDeck(uint8_t players)
{
	//TODO: Create a size variable deck depending on how many players are playing. 
	//See for example this rules: https://cardgames.io/ohhell/#rule
	assert(2 < players && players < 8)	
	return Deck_CreateDeckExclude();
}

/**
 * @brief Creates a new deck excluding the cards from excludedCards deck
 */
deck_t * Deck_CreateDeckExclude(deck_t *excluded)
{
	deck_t *deck = malloc(sizeof(*deck));
	deck->cards = NULL;
	deck->n_cards = 0;
	card_t newCard;

	for(int i = 0; i < MAX_CARDS_IN_DECK; i++)
	{
		newCard = Card_CreateCardFromNum(i);
		for (int k = 0; k < excluded->n_cards; k++){
			if(!(newCard.suit == excluded->cards[k]->suit && newCard.value == excluded->cards[k]->value)){
        		Deck_AddCardTo(deck, newCard);
			}	
		}
	}
	deck->n_cards = MAX_CARDS_IN_DECK;
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
