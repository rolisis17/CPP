#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::vector<int> vec;

    for (int i = 0; i < 10; ++i)
        vec.push_back(i * 7);
    
    for (size_t f = 0; f < vec.size(); ++f)
    {
        if (vec[f] == 49)
            std::cout << f << std::endl;
    }
    return 0;
}