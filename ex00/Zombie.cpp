#include "Zombie.hpp"
# include <iostream>
# include <string>

Zombie::Zombie(std::string name): name(name)
{}

Zombie::~Zombie()
{}

void Zombie::announce( void ) const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

std::string Zombie::get_name(void) const {
    return (this->name);
}