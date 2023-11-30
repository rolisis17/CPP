#include <iostream>
#include <string>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>

int main() {
    std::srand(static_cast<unsigned int>(std::time(0)));

    Base *something = generate();

    std::cout << "identify: ";
    identify(something);
    Base& something2 = *generate();
    std::cout << "identify: ";
    identify(&something2);
    return 0;
}