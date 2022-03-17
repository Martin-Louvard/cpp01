#pragma once

#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <iostream>
# include <string>

class Zombie{

    public:

    Zombie(std::string name);
    void announce( void ) const;
    std::string get_name( void ) const;
    
    private:

    std::string name;
};

    Zombie* newZombie(std::string name);
    void randomChump( std::string name );
#endif