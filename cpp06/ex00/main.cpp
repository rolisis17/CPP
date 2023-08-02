#include <iostream>
#include <string>
#include <cctype>
#include "ScalarConverter.hpp"

int main(int ac, char **av) {
    if (ac > 1)
    {
        std::string input = av[1];
        ScalarConverter::convert(input);
    }
    return 0;
}