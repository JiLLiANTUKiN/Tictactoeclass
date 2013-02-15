#ifndef GAME_H
#define GAME_H
#include "Board.h"
#include "Players.h"

class Game
{
    public:
        Game();
        virtual ~Game();

        void run();
        void initialize();
        void update();
        void render();
        bool checkWin();
        void switchPlayer();

    protected:
    private:

        Board m_board;
        Board box[];
        Players m_p1;
        Players m_p2;
        Players *m_currentPlayers;
        bool m_isComplete;

};


#endif // GAME_H
