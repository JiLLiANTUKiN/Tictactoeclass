#include "Board.h"
#include <iostream>
#include "Game.h"

using namespace std;

Board::Board()
{
    //ctor
}

Board::~Board()
{
    //dtor
}

void Board::initialize(){
    int i;
    for (i=0;i<9; i++)
    {
        box[i]= '1'+i;
    }
    render();
}

void Board::update(int move, char icon){
}

void Board::render(){
    cout << "\n\n\tTic Tac Toe Game!\n\n";
	cout << "Player 1 (X)  -  Player 2 (O)\n\n";
	cout << "     |     |     \n";
	cout << "  " << box[0] << "  |  " << box[1] << "  |  " << box[2] << "\n";
	cout << "_____|_____|_____\n";
	cout << "     |     |     \n";
	cout << "  " << box[3] << "  |  " << box[4] << "  |  " << box[5] << "\n";
	cout << "_____|_____|_____\n";
	cout << "     |     |     \n";
	cout << "  " << box[6] << "  |  " << box[7] << "  |  " << box[8] << "\n";
	cout << "     |     |     \n\n";
}
