#include "HumanB.hpp"
#include <iostream>

HumanB::HumanB(std::string name) : name(name)
{}

void    HumanB::setName(std::string name)
{
    this->name = name;
}

void    HumanB::setWeapon(Weapon weapon)
{
    this->weapon = weapon;
}

std::string HumanB::getName(void)
{
    return (this->name);
}

void    HumanB::attack(void)
{
    std::cout << this->getName() << " attacks with their " << this->weapon.getType() << std::endl;
}

Weapon HumanB::getWeapon(void)
{
    return (this->weapon);
}