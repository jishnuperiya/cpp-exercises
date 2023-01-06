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


protected: // so that the kid classes has access to these members. if it was private, the inherited classes cant access these members
//member variables has to be either private or protected. if inherited classes need access to member variable, the give protected, otherwise
// specify private
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

    void print_id(){
        std::cout << m_id << std::endl;
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
