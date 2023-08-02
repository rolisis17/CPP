#include <iostream>
#include <string>
// #include <cctype>
#include "Serializer.hpp"

int main(int ac, char **av) {
    Data data;
    uintptr_t t;
    if (ac > 1)
    {
        data.name = av[1];
        std::cout << &data << std::endl;
        std::cout << data.name << std::endl;
        t = Serializer::serialize(&data);
        std::cout << t << std::endl;
        Data& new_data = *(Serializer::deserialize(t));
        std::cout << &new_data << std::endl;
        std::cout << new_data.name << std::endl;
    }
    return 0;
}