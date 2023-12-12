#include <iostream>
#include <string>
#include <vector>
#include "easyfind.hpp"
#include <list>

int main()
{
    std::vector<int> vec;

    for (int i = 0; i < 10; ++i)
        vec.push_back(i * 7);
    
    int pos = easyfind(vec, 157);
    std::cout << "-1 == error" << std::endl;
    std::cout << "position " << pos << " number " << vec[pos] << std::endl;
    pos = easyfind(vec, 21);
    std::cout << "position " << pos << " number " << vec[pos] << std::endl;
    pos = easyfind(vec, 0);
    std::cout << "position " << pos << " number " << vec[pos] << std::endl;
    pos = easyfind(vec, 49);
    std::cout << "position " << pos << " number " << vec[pos] << std::endl;


    std::list<int> vec2;

    for (int i = 0; i < 10; ++i)
        vec2.push_back(i * 8);
    pos = easyfind(vec2, 64);
    std::cout << "-1 == error" << std::endl;
    std::cout << "position " << pos << " number 64" << std::endl;
    pos = easyfind(vec2, 21);
    std::cout << "position " << pos << " number 21" << std::endl;
    pos = easyfind(vec2, 0);
    std::cout << "position " << pos << " number 0" << std::endl;
    pos = easyfind(vec2, 72);
    std::cout << "position " << pos << " number 72" << std::endl;
    return 0;
}