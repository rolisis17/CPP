#include <iostream>
#include <string>
#include "iter.hpp"

void add1(int& a)
{
    std::cout << "before: " <<  a << std::endl;
    a++;
    std::cout << "after: " << a << std::endl;
}

void add1(char& a)
{
    std::cout << "before: " <<  a << std::endl;
    a++;
    std::cout << "after: " << a << std::endl;
}

int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

    iter<int>(array, 10, add1);
    char array2[10] = {'a', 'b', 'c', 'd', 'E', 'f', 'g', 'H', 'I', 'J'};

    iter<char>(array2, 10, add1);
    return 0;
}