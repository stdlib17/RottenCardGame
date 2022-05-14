#ifndef CARDPRINTING_H
#define CARDPRINTING_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "deck.h"

/************************************
 * DEFINES                  
 ************************************/

/************************************
 * PUBLIC FUNCTION PROTOTYPES                  
 ************************************/
void CardPrinting_PrintAllHands(deck_t* hands, uint8_t size);
void CardPrinting_PrintHand(deck_t* hand);
void CardPrinting_PrintCard(card_t* card);

/************************************
 * PRIVATE FUNCTION PROTOTYPES                  
 ************************************/
char prvSuitToLetter(eSuit s);
char prvValueToLetter(uint8_t v);

#endif /* CARDPRINTING_H */