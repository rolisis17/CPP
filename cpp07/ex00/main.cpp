#include <iostream>
#include <string>
#include "whatever.hpp"

int main()
{
    int a = 20;
    int b = 10;

    std::cout << "a: " << a << std::endl << "b: " << b << std::endl;
    swap<int>(a, b);
    std::cout << "a: " << a << std::endl << "b: " << b << std::endl;
    std::cout << "max: " << max<int>(a, b) << std::endl;
    std::cout << "min: " << min<int>(a, b) << std::endl;
    
    char a1 = 'a';
    char b1 = 'B';

    std::cout << "a1: " << a1 << std::endl << "b1: " << b1 << std::endl;
    swap<char>(a1, b1);
    std::cout << "a1: " << a1 << std::endl << "b1: " << b1 << std::endl;
    std::cout << "max: " << max<char>(a1, b1) << std::endl;
    std::cout << "min: " << min<char>(a1, b1) << std::endl;

    // std::string a2 = "agora vai";
    // std::string b2 = "agora nao vai";

    // std::cout << "a2: " << a2 << std::endl << "b2: " << b2 << std::endl;
    // sswap<std::string>(a2, b2);
    // std::cout << "a2: " << a2 << std::endl << "b2: " << b2 << std::endl;
    // std::cout << "max: " << mmax<std::string>(a2, b2) << std::endl;
    // std::cout << "min: " << mmin<std::string>(a2, b2) << std::endl;
    return 0;
}