/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   AMateria.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:43:23 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "AMateria.hpp"

AMateria::AMateria()
{
	std::cout << "AMateria Default constructor called" << std::endl;
}

AMateria::AMateria( std::string const & type )
{
	std::cout << "AMateria Constructor called" << std::endl;
}

AMateria::AMateria( AMateria& other) : type(other.type)
{
	std::cout << "AMateria Copy constructor called" << std::endl;
	*this = other;
}

AMateria& AMateria::operator=(AMateria& other)
{
	std::cout << "AMateria Copy assignment constructor called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

std::string	const & AMateria::getType( void ) const
{
	return (this->type);
}

void AMateria::use(ICharacter& target)
{

}

AMateria::~AMateria()
{
	std::cout << "AMateria Destructor called" << std::endl;
}
