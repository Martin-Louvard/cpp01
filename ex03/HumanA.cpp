#include "HumanA.hpp"
#include <iostream>

HumanA::HumanA(std::string name, Weapon weapon) : name(name), weapon(&weapon)
{}

void    HumanA::setName(std::string name)
{
    this->name = name;
}

void    HumanA::setWeapon(Weapon weapon)
{
    this->weapon = &weapon;
}

std::string HumanA::getName(void)
{
    return (this->name);
}

void    HumanA::attack(void)
{
    std::cout << this->getName() << " attacks with their " << (*this->weapon).getType() << std::endl;
}

Weapon HumanA::getWeapon(void)
{
    return (*this->weapon);
}