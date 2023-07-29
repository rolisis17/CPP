#include <iostream>
#include <string>
#include <cctype>
#include "ScalarConverter.hpp"

int main(int ac, char **av) {

    (void)ac;
    // while (1)
    // {
        std::string input = av[1];
        // std::cout << "Enter a string: ";
        // std::cin >> input;
        // input.erase(input.length() - 1);
        // if (input == "exit" || input == "EXIT")
            // break;
        ScalarConverter::convert(input);
        // std::cout << std::endl;
        // input.clear();
    // }
    return 0;
}