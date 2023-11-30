#include <iostream>
#include <string>
#include "iter.hpp"

void iadd1(int& a)
{
    // std::cout << "before: " <<  a << std::endl;
    a++;
    // std::cout << "after: " << a << std::endl;
}

void cadd1(char& a)
{
    // std::cout << "before: " <<  a << std::endl;
    a++;
    // std::cout << "after: " << a << std::endl;
}

int main()
{
    int array[10] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    iter<int>(array, 10, iadd1);
    for (int f = 0; f < 10; ++f)
        std::cout << array[f] << std::endl;
    char array2[10] = {'a', 'b', 'c', 'd', 'E', 'f', 'g', 'H', 'I', 'J'};
    iter<char>(array2, 10, cadd1);
    for (int i = 0; i < 10; ++i)
        std::cout << array2[i] << std::endl;
    return 0;
}