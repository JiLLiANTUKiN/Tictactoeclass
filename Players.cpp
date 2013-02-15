#include "Players.h"
#include <string>

void Players::setName(string n){
        name = n;
    }
string Players::getName(){
        return name;
    }


void Players::setIcon(char i){
icon = i;
    }
char Players::getIcon(){
    return icon;
    }

int Players::getMove(){}

Players::Players()
{

    //ctor
}

Players::~Players()
{
    //dtor
}
