#include <iostream>
#include "RPN.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        std::string av1(av[1]);
        RPN err(av1);
        (void) err;
    }
    return 0;
}