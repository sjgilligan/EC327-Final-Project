//
//  Player.hpp
//  ProjectPart
//
//  Created by Matthew Guacho on 12/7/22.
//

#ifndef Player_h
#define Player_h
#include <iostream>
#include <stdio.h>
using namespace std;
class Player {
private:
    string name;
    int playernum;
    int score;
    char symbol;
    int movecount;
public:
    Player();
    ~Player();
    void Nameask(int); /*name*/
    void Charask(int); /* o or x otherwise error*/
    int GamesWon(int);
    int move;
    int MakeMove(); /*1-7*/
    int getMoveConut();
    
};
#endif /* Player_hpp */
