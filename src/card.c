#include <stdlib.h>
#include <stdio.h>
#include <assert.h>

#include "card.h"

/******************************************************
 * PRIVATE FUNCTION PROTOTYPES
 ******************************************************/
static char prvSuitToLetter(eSuit s);
static char prvValueToLetter(uint8_t v);

/******************************************************
 * PUBLIC FUNCTION DEFINITIONS
 ******************************************************/

card_t Card_CreateRandomCard(void)
{
	uint8_t num = rand() % MAX_CARDS_IN_DECK;
	return Card_CreateCardFromNum(num);
}

/**
 * @brief Creates a card from a number (0 - MAX_CARDS_IN_DECK)
 */
card_t Card_CreateCardFromNum(uint8_t n)
{
	assert(0 <= n && n <= MAX_CARDS_IN_DECK);
	
	card_t c;
	c.suit = n / 13;
	c.value = n % 13 + 2;
	return c; 
}

void inline Card_PrintCard(card_t* card)
{
	printf("%c%c ", prvValueToLetter(card->value), prvSuitToLetter(card->suit));
}

/******************************************************
 * PRIVATE FUNCTION DEFINITIONS
 ******************************************************/
static char prvSuitToLetter(eSuit s)
{
	assert(CLUBS <= s && s <= HEARTS);

	char retVal;
	switch(s)
	{
		case CLUBS:
			retVal = 'c';
			break;

		case DIAMONDS:
			retVal = 'd';
			break;

		case SPADES:
			retVal = 's';
			break;

		case HEARTS:
			retVal = 'h';
			break;

		default:
			retVal = '-';
	}
	return retVal;
}

static char prvValueToLetter(uint8_t v)
{
	assert(2 <= v && v <= VALUE_ACE);

	char retVal;
	switch (v)
	{
		case VALUE_ACE:
			retVal = 'A';
			break;

		case VALUE_KING:
			retVal = 'K';
			break;

		case VALUE_QUEEN:
			retVal = 'Q';
			break;

		case VALUE_JACK:
			retVal = 'J';
			break;

		case 10:
			retVal = '0';
			break;

		default:
			retVal = '0' + v;
	}
	return retVal;
}
