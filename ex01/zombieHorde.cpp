#include "Zombie.hpp"
#include <string>

Zombie* zombieHorde( int N, std::string name ){
    
    Zombie* zombies = new Zombie[N];

    for (int x = 0; x < N; x++)
    {
        zombies[x].set_name(name);
    }
    return (zombies);
}