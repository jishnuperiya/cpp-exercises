#include <iostream>

#include "Weapons.h"

int main()
{

    // you can not create object of attackInterface class as its an Interface
    // Weapon is also an abstract class as in this class the pure virtual function "AttackInterface::attack" has no overrider
    Axe axe{"Great dwarfen axe", 12.0F, 1.2F};
    Longbow longbow{"Bow of the emperer", 25.0F, 0.5F};

    axe.attack();
    longbow.attack();

    return 0;
}
