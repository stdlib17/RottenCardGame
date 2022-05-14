#ifndef GAME_HANDLER_H
#define GAME_HANDLER_H

#include <stdlib.h>
#include <stdio.h>
#include <stdint.h>
#include "deck.h"
#include "player.h"

/******************************************************
 * DEFINES AND TYPES
 ******************************************************/
typedef struct{
	eSuit trumpSuit;
} sGameContext;

/******************************************************
 * PUBLIC VARIABLES
 ******************************************************/
sGameContext GameContext;
player_t Players[MAX_PLAYERS];

/******************************************************
 * PUBLIC FUNCTION PROTOTYPES
 ******************************************************/
void Game_DealCards(deck_t * gameDeck, player_t ** players);

#endif /* GAME_HANDLER_H */
