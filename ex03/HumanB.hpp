#ifndef HUMAN_B_HPP
# define HUMAN_B_HPP

#include <string>
#include "Weapon.hpp"

class HumanB{
    private:
    
    std::string name;
    Weapon* weapon;

    public:
    
    HumanB(std::string name);
    
    void    attack(void);
    void    setName(std::string name);
    std::string getName(void);
    void    setWeapon(Weapon& weapon);
    Weapon  getWeapon(void);

};

#endif