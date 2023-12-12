#include <iostream>
#include <vector>
#include "Span.hpp"
#include <cstdlib>
#include <ctime>

int main()
{
    std::srand(std::time(0));
    try {
        Span sp = Span(5);
        sp.addNumber(6);
        sp.addNumber(3);
        sp.addNumber(17);
        sp.addNumber(9);
        sp.addNumber(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;

        // Test addNumbers with iterators
        Span sps(1000000);
        /* sps.addNumber(10000, 9); */
        for (int i = 0; i < 100001; ++i)
            sps.addNumber(std::rand());

        std::cout << sps.shortestSpan() << std::endl;
        std::cout << sps.longestSpan() << std::endl;


    } catch (const std::exception& e) {
        std::cerr << "Exception: " << e.what() << std::endl;
    }

    return 0;
}