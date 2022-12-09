//
//  Player.cpp
//  ProjectPart
//
//  Created by Matthew Guacho on 12/7/22.
//

#include "Player.h"
Player::Player(){
    name = " ";
    playernum =1;
    score = 0;
    symbol = ' ';
    movecount = 0;
}

void Player::Nameask(int playernum){
    string playname;
    cout<< "Whats the name of player "<<playernum<<"?";
    cin >> playname;
    name = playname;
}
void Player::Charask(int playernum){
    char pickchar = ' ';
    if ((pickchar!='x'||pickchar!='X') || (pickchar!='o'||pickchar!='0')){
    cout<< "Whats the color of player "<<playernum<<"?";
    cin >> pickchar;
        if (pickchar!='x' || pickchar!='o'){
            cout<<"Invalid input";
    }
    }
    symbol = pickchar;
}

int Player::GamesWon(int score){
    score++;
    return score;
}
int Player::MakeMove(){
    int column;
    cout<<"Which column would you like to select? ";
    cin >>column;
    if (column <1 || column >7){
        cout<< "Invalid command. Please select between 1 to 7";
        cin>>column;
    }
    return column;

}
Player::~Player(){
    
}
int Player::getMoveConut(){
    return movecount;
}
