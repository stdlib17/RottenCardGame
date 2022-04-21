#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>

#include "card.h"

//____________________
//
// PRINTING MODULE
//____________________

//Update cards to print
void PrintCards(int cardArray[]);

//Print in every frame
void Print();

typedef struct {
	int cardNum;
	int hands;

}printer;