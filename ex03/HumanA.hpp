#ifndef HUMAN_A_HPP
# define HUMAN_A_HPP

#include <string>
#include "Weapon.hpp"

class HumanA{
    private:
    
    std::string name;
    Weapon& weapon;

    public:
    
    HumanA(std::string name, Weapon& weapon);
    
    void    attack(void);
    void    setName(std::string name);
    std::string getName(void);
    void    setWeapon(Weapon weapon);
    Weapon  getWeapon(void);

};

#endif