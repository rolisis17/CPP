/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Base.hpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/02 14:07:59 by dcella-d          #+#    #+#             */
/*   Updated: 2023/08/02 14:42:20 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"
#include <ctime>
#include <cstdlib>

Base::~Base()
{}

Base*	generate(void)
{
    double randomValue = static_cast<double>(rand()) / RAND_MAX;

	if (randomValue <= 0.3)
    {
        std::cout << "Generating A" << std::endl;
		return new A;
    }
	else if (randomValue > 0.3 && randomValue <= 0.7)
    {
        std::cout << "Generating B" << std::endl;
		return new B;
    }
    else
    {
        std::cout << "Generating C" << std::endl;
        return new C;
    }
}

void	identify(Base* p)
{
    if (dynamic_cast<A*>(p) != NULL)
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p) != NULL)
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p) != NULL)
        std::cout << "C" << std::endl;
}

void	identify(Base& p)
{
    try
    {
        if (dynamic_cast<A*>(&p) != NULL)
            std::cout << "A" << std::endl;
    }
    catch(std::exception& e)
    {
    }
    try
    {
        if (dynamic_cast<B*>(&p) != NULL)
            std::cout << "B" << std::endl;
    }
    catch(std::exception& e)
    {
    }
    try
    {
        if (dynamic_cast<C*>(&p) != NULL)
            std::cout << "C" << std::endl;
    }
    catch(std::exception& e)
    {
    }
}
