#include <iostream>
#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
    if (ac == 2)
    {
        BitcoinExchange btc(av[1]);
        (void) btc;
    }
    return 0;
}