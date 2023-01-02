#include <iostream>
#include <string>
#include <vector>

#include "Agent.h"

void printAllAgents(const std::vector<Agent *> &agents)
{
    for (const auto agent : agents)
    {
        agent->print_agent_data();
    }
}

int main()
{
    // problem when the objects are of baseclass pointer type
    Agent* agent1 = new Agent("A1", 0, 100, 25); // creating agent1 object in heap
    Agent* player1 = new Player("P1", 1, 250, 55);
    Agent* npc1 = new NPC("N1", 2, 235, 41);

    const auto agents = std::vector<Agent *>{agent1, player1, npc1}; // no need of memory address as before as these are already pointers

    printAllAgents(agents);

    delete agent1;
    delete player1;
    delete npc1;

    /* CONSOLE OUTPUT:
    Agent Constructor!
    Agent Constructor!
    Player Constructor!
    Agent Constructor!
    NPC Constructor!
    Agent hp: 100, energy: 25
    Player hp: 250, energy: 55
    NPC hp: 235, energy: 41
    Agent Destructor!
    Agent Destructor!
    Agent Destructor!

    ---> see the derived class destructors are not called. because the object is of type base class pointer and it destructs the base class destructor.
    to tell the program that there may be other potential destructors also (destructors of derived class), you need to use virtual destructor

    */

    return 0;
}
