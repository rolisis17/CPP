#include <iostream>
#include <string>
#include "Array.hpp"

int main()
{
    Array<const char*> des(5);
    for (int z = 0; z < des.size(); ++z) {
        des[z] = "as";
        std::cout << des[z] << std::endl;
    }

    Array<int> data(3);
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

    Array<std::string> data2(8);
    Array<std::string> myArray2(5);
    
    std::string a = "a";
    for (int k = 0; k < myArray2.size(); ++k) {
        myArray2[k] = a + 's';
    }

    for (int v = 0; v < myArray2.size(); ++v) {
        std::cout << "myArray2[" << v << "] = " << myArray2[v] << std::endl;
    }
    data2 = myArray2;
    for (int q = 0; q < data2.size(); ++q) {
        std::cout << "data2[" << q << "] = " << data2[q] << std::endl;
    }
    return 0;
}