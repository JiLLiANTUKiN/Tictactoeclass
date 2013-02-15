#include <string>

using namespace std;

#ifndef PLAYERS_H
#define PLAYERS_H


class Players
{
    public:
        Players();
        virtual ~Players();
        void setName(string n);
        void setIcon(char i);

        int getMove();

        string getName();
        char getIcon();

    protected:
    private:
        string name;
        char icon;
};

#endif // PLAYERS_H
