#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "card.h"

/************************************
 * PUBLIC FUNCTION DEFINITIONS                  
 ************************************/

/**/

/**
 * @brief Creates a random card
 * 
 * @return card_t 
 */
card_t Card_CreateRandomCard(void)
{
	card_t c;
	c.value = rand() % VALUE_ACE + 1;
	c.suit = rand() % NUM_SUITS;
	
	return c;
}

/**
 * @brief 
 * 
 */

//TODO: Size of deck is hardcoded with a define,
//		should be variable depending on num of players
//		as the original game (use dynamic allocation)
hand_t * Card_CreateDeck(void)
{
	hand_t * deck = malloc(sizeof(*deck));
	deck->cards = NULL;

	int ptr = 0;
	for(int i = 2; i < VALUE_ACE + 1; i++)
	{
		for(eSuit s = 0; s < NUM_SUITS; s++)
		{
			deck->cards = realloc(deck->cards, (ptr + 1) * sizeof(*deck->cards));
			deck->cards[ptr]->suit = s;
			deck->cards[ptr]->value = i;
			ptr++;
		}
	}
	deck->n_cards = ptr;
	return deck;
}