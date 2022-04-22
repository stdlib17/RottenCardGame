#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "card.h"

/************************************
 * PUBLIC FUNCTION DEFINITIONS                  
 ************************************/

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
	hand_t * h;
	//cards[52] .. won't work because if we create an array inside a function without malloc, it wont exist outside (think more about it)
	for(int i = 1; i < VALUE_ACE; i++)
	{
		for(eSuit s = 0; s < NUM_SUITS; s++)
		{
			
		}
	}
	return h;
}