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

Ice::Ice() : AMateria("Cure")
{
	std::cout << "Ice Default constructor called" << std::endl;
}

Ice::Ice(std::string type) : AMateria(type)
{
	std::cout << "Ice Constructor called" << std::endl;
}

Ice::Ice( Ice& other)
{
	std::cout << "Ice Copy constructor called" << std::endl;
	*this = other;
}

Ice& Ice::operator=(Ice& other)
{
	std::cout << "Ice Copy assignment constructor called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

Ice&	Ice::clone( void ) const
{
	Ice Clone = new Ice();
	Clone = this;
	return (Clone);
}

void	use( ICharacter& )
{
	std::cout << "* shoots an ice bolt at " << Character.getName() << " *" << std::endl;
}

Ice::~Ice()
{
	std::cout << "Ice Destructor called" << std::endl;
}
