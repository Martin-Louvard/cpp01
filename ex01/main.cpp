#include "Zombie.hpp"

int main(){
    Zombie  *horde = zombieHorde(3, "pouic");
    for (int x = 0; x < 3; x++)
        horde[x].announce();

    delete [] horde;
}