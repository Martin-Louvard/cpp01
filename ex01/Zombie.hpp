#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP

# include <string>

class Zombie{

    public:
    Zombie(void);
    Zombie(std::string name);
    ~Zombie();
    void announce( void ) const;
    std::string get_name( void ) const;
    void    set_name(std::string name);
    private:

    std::string name;
};

Zombie* zombieHorde( int N, std::string name );

#endif