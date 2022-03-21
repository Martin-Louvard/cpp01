#include "Karen.hpp"
#include <iostream>
#include <string>

void Karen::debug( void )
{
    std::cout << "I love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !" << std::endl ;
}

void Karen::info( void )
{
    std::cout << "I cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !" << std::endl ;
}

void Karen::warning( void )
{
    std::cout << "I think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month." << std::endl ;
}

void Karen::error( void )
{
    std::cout << "This is unacceptable ! I want to speak to the manager now." << std::endl ;
}

void Karen::complain( std::string level )
{
    t_type complain_function[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    std::string input_lvl[4] = {"debug", "info", "warning", "error"};

    for (int x = 0; x < 4 ; x++)
    {
        if (level == input_lvl[x])
        {
            for (int y = x; y < 4 ; y++)
            {
                (this->*(complain_function[y].f))();
            }
            return ;
        }
    }
    std::cout << "Not a valid complain" << std::endl;
}