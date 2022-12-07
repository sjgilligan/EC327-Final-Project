//
// Created by Sebbie on 12/6/2022.
//

#include "Visual.h"
#include "Board.h"
#include <iostream>

using namespace std;

Visual::Visual() {
}

void Visual::Startup() {
    cout << "Welcome to..." << endl;
    cout << "        {}       {}{}      {}{}   {}   {}{}   {}   {}{}{}       {}   {}{}{}{}{}       {}    {}" << endl;
    cout << "      {}       {}    {}    {} {}  {}   {} {}  {}   {}         {}         {}           {}    {}" << endl;
    cout << "    {}         {}    {}    {}  {} {}   {}  {} {}   {}       {}           {}           {}    {}" << endl;
    cout << "    {}         {}    {}    {}   {}{}   {}   {}{}   {}{}{}   {}           {}     {}{}  {}{}{}{}" << endl;
    cout << "      {}       {}    {}    {}    {}}   {}    {}}   {}         {}         {}                 {}" << endl;
    cout << "        {}       {}{}      {}     {}   {}     {}   {}{}{}       {}       {}                 {}" << endl;
    cout << "                                       Created by: ...                                        " << endl;
    cout << endl;
}

void Visual::Plot(Point2D p, char piece) {
    grid[p.y][p.x][0] = piece;
}

void Visual::Draw(){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j <= columns; j++){
            cout << "| " << ;
        }
        cout << endl;
    }
}


