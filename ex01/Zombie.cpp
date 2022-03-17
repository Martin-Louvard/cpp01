#include "Zombie.hpp"
# include <iostream>
# include <string>

Zombie::Zombie(void)
{}

Zombie::Zombie(std::string name): name(name)
{}

Zombie::~Zombie()
{
    std::cout << "destructing " << this->name << std::endl;
}

void Zombie::announce( void ) const
{
    std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void Zombie::set_name( std::string name )
{
    this->name = name;
}

std::string Zombie::get_name(void) const {
    return (this->name);
}