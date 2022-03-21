#include "Karen.hpp"
#include <iostream>
#include <string>

void Karen::debug( void )
{
    std::cout << "[DEBUG]\nI love having extra bacon for my 7XL-double-cheese-triple-pickle-specialketchup burger. I really do !\n" << std::endl ;
}

void Karen::info( void )
{
    std::cout << "[INFO]\nI cannot believe adding extra bacon costs more money. You didn't put enough bacon in my burger ! If you did, I wouldn't be asking for more !\n" << std::endl ;
}

void Karen::warning( void )
{
    std::cout << "[WARNING]\nI think I deserve to have some extra bacon for free. I've been coming for years whereas you started working here since last month.\n" << std::endl ;
}

void Karen::error( void )
{
    std::cout << "[ERROR]\nThis is unacceptable ! I want to speak to the manager now.\n" << std::endl ;
}

void Karen::complain( std::string level )
{
    t_type complain_function[4] = {&Karen::debug, &Karen::info, &Karen::warning, &Karen::error};
    std::string input_lvl[4] = {"debug", "info", "warning", "error"};

    for (int x = 0; x < 4 ; x++)
    {
        if (level == input_lvl[x])
        {
            (this->*(complain_function[x].f))();
            return ;
        }
    }
    std::cout << "Not a valid complain\n" << std::endl;
}