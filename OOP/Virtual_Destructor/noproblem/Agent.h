#ifndef F88368EF_D6A3_4A35_B616_A5528CD70CDC
#define F88368EF_D6A3_4A35_B616_A5528CD70CDC
#ifndef A5F6092D_7DAD_4B1B_87F1_B0BF8D390A4E
#define A5F6092D_7DAD_4B1B_87F1_B0BF8D390A4E
#ifndef AC64CF5B_6D4A_4DDE_8653_697523330909
#define AC64CF5B_6D4A_4DDE_8653_697523330909

#include <iostream>
#include <string>

class Agent
{
public:
    Agent(const std::string &name,
          const std::uint32_t id,
          const std::uint32_t hp = 0U,
          const std::uint32_t energy = 0U)
        : m_name(name), m_id(id), m_hp(hp), m_energy(energy)
    {
        std::cout << "Agent Constructor!" << '\n';
    }

    ~Agent()
    {
        std::cout << "Agent Destructor!" << '\n';
    }

    virtual void print_agent_data() const
    {
        std::cout << "Agent hp: " << m_hp << ", energy: " << m_energy << '\n';
    }

protected:
    const std::string m_name;
    const std::uint32_t m_id;
    std::uint32_t m_hp = 0U;
    std::uint32_t m_energy = 0U;
};

class Player : public Agent
{
public:
    Player(const std::string &name,
           const std::uint32_t id,
           const std::uint32_t hp = 0U,
           const std::uint32_t energy = 0U)
        : Agent(name, id, hp, energy)
    {
        std::cout << "Player Constructor!" << '\n';
    }

    ~Player()
    {
        std::cout << "Player Destructor!" << '\n';
    }

    void print_agent_data() const override
    {
        std::cout << "Player hp: " << m_hp << ", energy: " << m_energy << '\n';
    }
};

class NPC : public Agent
{
public:
    NPC(const std::string &name,
        const std::uint32_t id,
        const std::uint32_t hp = 0U,
        const std::uint32_t energy = 0U)
        : Agent(name, id, hp, energy)
    {
        std::cout << "NPC Constructor!" << '\n';
    }

    ~NPC()
    {
        std::cout << "NPC Destructor!" << '\n';
    }

    void print_agent_data() const override
    {
        std::cout << "NPC hp: " << m_hp << ", energy: " << m_energy << '\n';
    }
};


#endif /* AC64CF5B_6D4A_4DDE_8653_697523330909 */


#endif /* A5F6092D_7DAD_4B1B_87F1_B0BF8D390A4E */


#endif /* F88368EF_D6A3_4A35_B616_A5528CD70CDC */
