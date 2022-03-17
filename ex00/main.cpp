#include "Zombie.hpp"

int main(){
    Zombie martin("martin");
    martin.announce();

    Zombie *camille = newZombie("camille");
    (*camille).announce();
    delete(camille);

    randomChump("pouic");
}