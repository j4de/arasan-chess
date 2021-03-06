// Copyright 1993 by Jon Dart.  All Rights Reserved.

#ifndef _SEE_H
#define _SEE_H

#include "board.h"

// This function performs a static exchange evalution ("SEE") to
// estimate the gain from making capture move "move" on board
// "board".
int see( const Board &board, Move move );

// return 0 if SEE value is below threshold, 1 if SEE value
// is >= threshold
int seeSign( const Board &board, Move move, int threshold);

#endif

