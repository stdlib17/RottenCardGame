#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include <assert.h>

#include "cardPrinting.h"

/************************************
 * PRIVATE FUNCTION DEFINITIONS                  
 ************************************/
char prvSuitToLetter(eSuit s);
char prvValueToLetter(uint8_t v);

/************************************
 * PUBLIC FUNCTION DEFINITIONS                  
 ************************************/

void CardPrinting_PrintAllHands(deck_t* hands, uint8_t size)
{
	for (int i = 0; i < size; i++) {
		CardPrinting_PrintHand(&hands[i]);
	}
}

void CardPrinting_PrintHand(deck_t* hand)
{
	for (int i = 0; i < hand->n_cards; i++)
	{
		CardPrinting_PrintCard(hand->cards[i]);
	}
	printf("\n");

}

void inline CardPrinting_PrintCard(card_t* card)
{
	printf("%c%c ", prvValueToLetter(card->value), prvSuitToLetter(card->suit));
}

/************************************
 * PRIVATE FUNCTION DEFINITIONS                  
 ************************************/

char prvSuitToLetter(eSuit s)
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

char prvValueToLetter(uint8_t v)
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
