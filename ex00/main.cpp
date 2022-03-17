#include "Zombie.hpp"
#include <iostream>
#include <string>

int main(){
    Zombie martin("martin");
    martin.announce();

    Zombie *camille = newZombie("camille");
    (*camille).announce();
    randomChump("pouic");
}