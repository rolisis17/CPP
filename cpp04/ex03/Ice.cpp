/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:43:23 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Ice.hpp"

Ice::Ice(void) : AMateria("ice")
{
	// std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(Ice& other)
{
	// std::cout << "Ice Copy constructor called" << std::endl;
	*this = other;
}

Ice::Ice(Ice* other)
{
	*this = *other;
}

Ice& Ice::operator=(Ice& other)
{
	// std::cout << "Ice Copy assignment constructor called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

AMateria*	Ice::clone(void) const
{
	return new Ice(const_cast<Ice*>(this));
}

void	Ice::use(ICharacter& target)
{
	std::cout << "* shoots an ice bolt at " << target.getName() << " *" << std::endl;
}

Ice::~Ice(void)
{
	// std::cout << "Ice Destructor called" << std::endl;
}
