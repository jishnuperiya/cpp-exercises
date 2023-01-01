#pragma once

#include <cstdint>
#include <iostream>
#include <string>

class Agent //base class
{
public:
    Agent(const std::string &name, const std::uint32_t id)
    :m_name(name),m_id(id)
    {
        std::cout << "Agent constructor! \n";
    }
    ~Agent()
    {
        std::cout << "Agent destructor! \n";

    }


protected:
    const std::string m_name; // every player and npc has name and id
    const std::uint32_t m_id;

};

class Player : public Agent // why public? - see in another video
{
public:
    Player(const std::string &name, const std::uint32_t id) : Agent(name,id)
    {
        std::cout << "Player constructor! \n";
    }
    ~Player()
    {
        std::cout << "Player destructor! \n";
    }
};

class NPC : public Agent // why public? - see in another video
{
public:
    NPC(const std::string &name, const std::uint32_t id) : Agent(name,id)
    {
        std::cout << "NPC constructor! \n";
    }
    ~NPC()
    {
        std::cout << "NPC destructor! \n";
    }
};
