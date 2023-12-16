#include <iostream>
#include "PmergeMe.hpp"

int main(int ac, char **av)
{
    if (ac > 1)
    {
        PmergeMe me(ac - 1, av + 1);
        (void) me;
    }
    return 0;
}