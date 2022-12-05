//
//  Board.h
//  
//
//  Created by Nick Ramondo on 12/3/22.
//

#ifndef Board_h
#define Board_h

#include <iostream>
#include <cstdlib>
#include <cmath>
#include <time.h>
#include "Point2d"

class Board{
public:
    const static int boardptr[7][7];
    int game_over;
    int moveCount;
    
    Board();
    void winCheck(Board &b);
    Point2d getMove(Board &b, int move);
    void placePiece(Board &b, Point2d move);
};

#endif /* Board_h */
