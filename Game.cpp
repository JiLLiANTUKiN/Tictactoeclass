#include "Game.h"
#include <iostream>
#include "Board.h"
#include "Players.h"

using namespace std;

Game::Game()
{
    //ctor
}

Game::~Game()
{
    //dtor
}

void Game::initialize(){

    cout << "Initializing...."<< endl;
    m_board.initialize();
    m_p1.setName("Noel");
    m_p1.setIcon('X');
    m_p2.setName("Gen");
    m_p2.setIcon('O');

    m_currentPlayers = &m_p1;
    }


void Game::update(){
cout << "Updating......" << endl;
m_isComplete=checkWin();

if (!m_isComplete){
m_board.update(m_currentPlayers->getMove(), m_currentPlayers->getIcon());
switchPlayer();}
}

void Game::render(){
cout << "Rendering....." << endl << endl;}

bool Game::checkWin(){
cout << "Checking Winner...." << endl;
int n;
	if (box[0] == box[1] && box[1] == box[2] && box[2] == box[3])
		return 1;
    else
    for (n=0;n<4;n++)
        {
          if (square1[n] != square1[n+1])
          return 2;
        }
return false;

}

void Game::switchPlayer(){
cout << "Switching PLayer....." << endl;}

void Game::run(){
while (!m_isComplete){
update();
render();
}
}
