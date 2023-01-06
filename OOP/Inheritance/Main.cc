/*
in this example we will create a basis class
and subclass for player and npc. this basis class will serve both player class and npc class

*/

#include <iostream>
#include "Agent.h"

int main()
{

    {
        Agent agent1("A1",2U);
    }
    {
        Player player1("A2",2);
        player1.print_id();
    }
    {
        auto npc1 = NPC{"A3",2}; // different way to initialize object
    }

    return 0;
}
