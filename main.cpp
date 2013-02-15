#include <iostream>
#include "Players.h"
#include "Board.h"
#include "Game.h"

using namespace std;

int main()
{
    Game game;

    game.initialize();
    game.update();
    game.render();
    game.checkWin();
    game.switchPlayer();


    /*Players p1, p2;
    Board board;
    p1.setName("jennah");
    p1.setIcon('X');
    p2.setName("jonas");
    p2.setIcon('O');


    cout << "Goodbye Philippines!" << endl;

    cout << "Name of Player 1 is " << p1.getName()<< endl;
    cout << "His icon is " << p1.getIcon() << endl << endl;

    cout << "Name of Player 2 is " << p2.getName() << endl;
    cout << "His icon is " << p2.getIcon() << endl << endl;

    cout << p1.getName ();
    board.initialize();
    board.render();*/
    return 0;
}
