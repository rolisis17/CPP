/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:43:23 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cure.hpp"

Cure::Cure() : AMateria("Cure")
{
	std::cout << "Cure Default constructor called" << std::endl;
}

Cure::Cure(std::string type) : AMateria(type)
{
	std::cout << "Cure Constructor called" << std::endl;
}

Cure::Cure( Cure& other)
{
	std::cout << "Cure Copy constructor called" << std::endl;
	*this = other;
}

Cure::Cure(Cure* other)
{
	*this = *other;
}

Cure& Cure::operator=(Cure& other)
{
	std::cout << "Cure Copy assignment constructor called" << std::endl;
	if (this != &other) //need to delete what was allocated before.
		type = other.type;
	return (*this);
}

AMateria*	Cure::clone( void ) const
{
	return new Cure(const_cast<Cure*>(this));
}

void	use(ICharacter& target)
{
	std::cout << "* heals " << target.getName() << "’s wounds *" << std::endl;
}

Cure::~Cure()
{
	std::cout << "Cure Destructor called" << std::endl;
}
