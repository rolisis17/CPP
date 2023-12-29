#include <iostream>
#include <vector>
#include <algorithm>
#include <list>
#include "MutantStack.hpp"

int main()
{
    std::cout << "Mutant" << std::endl;
    MutantStack<int> mstack2;
    mstack2.push(5);
    mstack2.push(17);
    std::cout << mstack2.top() << std::endl;
    mstack2.pop();
    std::cout << mstack2.size() << std::endl;
    mstack2.push(3);
    mstack2.push(5);
    mstack2.push(737);
    //[...]
    mstack2.push(0);
    MutantStack<int>::iterator it3 = mstack2.begin();
    MutantStack<int>::iterator ite3 = mstack2.end();
    ++it3;
    --it3;
    while (it3 != ite3)
    {
    std::cout << *it3 << std::endl;
    ++it3;
    }
    std::cout << std::endl << "vector" << std::endl;


    std::vector<int> mstack;
    mstack.push_back(5);
    mstack.push_back(17);
    std::cout << mstack.back() << std::endl;
    mstack.erase(mstack.end() - 1);
    // vector you can erase end() and the container will grab the last element.
    // so if you use end() - 1 the result will be the same.
    // same does not work with list.
    std::cout << mstack.size() << std::endl;
    mstack.push_back(3);
    mstack.push_back(5);
    mstack.push_back(737);
    //[...]
    mstack.push_back(0);
    std::vector<int>::iterator it = mstack.begin();
    std::vector<int>::iterator ite = mstack.end();
    ++it;
    --it;
    while (it != ite)
    {
    std::cout << *it << std::endl;
    ++it;
    }
    std::cout << std::endl << "list" << std::endl;


    std::list<int> mstack4;
    mstack4.push_back(5);
    mstack4.push_back(17);
    std::cout << mstack4.back() << std::endl;
    mstack4.erase(--mstack4.end());
    std::cout << mstack4.size() << std::endl;
    mstack4.push_back(3);
    mstack4.push_back(5);
    mstack4.push_back(737);
    //[...]
    mstack4.push_back(0);
    std::list<int>::iterator it4 = mstack4.begin();
    std::list<int>::iterator ite4 = mstack4.end();
    ++it4;
    --it4;
    while (it4 != ite4)
    {
    std::cout << *it4 << std::endl;
    ++it4;
    }
    /* std::stack<int> s(mstack); */
    return 0;
}