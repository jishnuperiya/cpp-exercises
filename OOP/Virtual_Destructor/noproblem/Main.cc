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

    const auto agents = std::vector<Agent *>{agent1, player1, npc1};

    printAllAgents(agents);

    delete agent1;
    delete player1;
    delete npc1;

    return 0;
}
