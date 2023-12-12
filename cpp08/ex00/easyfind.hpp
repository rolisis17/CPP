#ifndef EASYFIND_HPP
#define EASYFIND_HPP

#include <algorithm>

template <typename T>
int    easyfind(const T& cnt, int i)
{
    if (std::find(cnt.begin(), cnt.end(), i) != cnt.end())
        return (std::distance(cnt.begin(), std::find(cnt.begin(), cnt.end(), i)));

    return -1;
}

#endif