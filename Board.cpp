//
// 
//  
//
//  Created by Nick Ramondo on 12/3/22.
//

#include "Board.h"

using namespace std;

Board::Board(){
    game_over = 0;
    for (int r = 0; r < 6; r++){
        for (int c = 0; c < 7; c++){
            boardptr[r][c] = 0;
        }
    }
}

void Board::winCheck(Board &b){
    
    for (int r = 0; r < 7; r++){
        for (int c = 0; c < 4; c++){
            if (b.boardptr[r][c] == 1 && b.boardptr[r][c+1] == 1 && b.boardptr[r][c+2] == 1 && b.boardptr[r][c+3] == 1){
                b.game_over = 1;
            }
            if (b.boardptr[r][c] == 2 && b.boardptr[r][c+1] == 2 && b.boardptr[r][c+2] == 2 && b.boardptr[r][c+3] == 2){
                b.game_over = 2;
            }
        }
    }
    
    for (int r = 0; r < 4; r++){
        for (int c = 0; c < 7; c++){
            if (b.boardptr[r][c] == 1 && b.boardptr[r+1][c] == 1 && b.boardptr[r+2][c] == 1 && b.boardptr[r+3][c] == 1){
                b.game_over = 1;
            }
            if (b.boardptr[r][c] == 2 && b.boardptr[r+1][c] == 2 && b.boardptr[r+2][c] == 2 && b.boardptr[r+3][c] == 2){
                b.game_over = 2;
            }
        }
    }
    
    for (int r=3; r < 8; r++){
        for (int c=0; c < 5; c++){
            if (b.boardptr[r][c] == 1 && b.boardptr[r-1][c+1] == 1 && b.boardptr[r-2][c+2] == 1 && b.boardptr[r-3][c+3] == 1){
                b.game_over = 1;
            }
            if (b.boardptr[r][c] == 2 && b.boardptr[r-1][c+1] == 2 && b.boardptr[r-2][c+2] == 2 && b.boardptr[r-3][c+3] == 2){
                b.game_over = 2;
            }
        }
    }
    
    for (int r=0; r < 4; r++){
        for (int c=0; c < 4; c++){
            if (b.boardptr[r][c] == 1 && b.boardptr[r+1][c+1] == 1 && b.boardptr[r+2][c+2] == 1 && b.boardptr[r+3][c+3] == 1){
                b.game_over = 1;
            }
            if (b.boardptr[r][c] == 2 && b.boardptr[r+1][c+1] == 2 && b.boardptr[r+2][c+2] == 2 && b.boardptr[r+3][c+3] == 2){
                b.game_over = 2;
            }
        }
    }
    
    if (b.moveCount == 42){
        b.game_over = 3;
    }
    return;
}

Point2d Board::getMove(Board & b, int move){
    for (int r = 0; r < 7; r++){
        if (b.boardptr[r][move] == 0){
            return Point2d(r,move);
        }
    }
    return Point2d(10,10);
}

void Board::placePiece(Board &b, Point2d move){
    if (b.moveCount % 2 == 1){
        b.boardptr[Point2d.x][Point2d.y] = 1;
    }
    else {
        b.boardptr[Point2d.x][Point2d.y] = 2;
    }
    return;
}

void Board::placePiece(Board & b, Point2d move){
    if (b.moveCount % 2 == 1){
        b.boardptr[Point2d.x][Point2d.y] = 1;
    }
    else {
        b.boardptr[Point2d.x][Point2d.y] = 2;
    }
    return;
}

int Board::AIMove(Board & b){
    srand(time(NULL));
    for (int r = 0; r < 7; r++){
        for (int r = 0; r < 6; r++){
            if (b.boardptr[r][c]== 0){
                b.boardptr[r][c] = 2;
                winCheck(Board & b);
                if (b.game_over != 0){
                    return c;
                }
            }
        }
    }
    int rand_move = rand() % 7;
    return rand_move;
}





