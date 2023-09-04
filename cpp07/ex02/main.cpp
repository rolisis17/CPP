#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
    Array<int> data(8);
    Array<int> myArray(5);
    
    for (int i = 0; i < myArray.size(); ++i) {
        myArray[i] = i * i;
    }

    for (int f = 0; f < myArray.size(); ++f) {
        std::cout << "myArray[" << f << "] = " << myArray[f] << std::endl;
    }
    data = Array<int>(myArray);
    for (int j = 0; j < data.size(); ++j) {
        std::cout << "data[" << j << "] = " << data[j] << std::endl;
    }
    return 0;
}