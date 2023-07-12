/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:43:23 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Character.hpp"

Character::Character()
{
	std::cout << "Character Default constructor called" << std::endl;
}

Character::Character(std::string type)
{
	std::cout << "Character Constructor called" << std::endl;
}

Character::Character( Character& other)
{
	std::cout << "Character Copy constructor called" << std::endl;
	*this = other;
}

ICharacter&	Character::operator=( ICharacter& other )
{
	std::cout << "Character Copy assignment constructor called" << std::endl;
	if (this != &other)
		Name = other.Name;
	return (*this);
}

std::string const & Character::getName() const
{
	return (Name);
}

void	use( ICharacter& )
{
	// std::cout << "* heals " << Character.getName() << "’s wounds *" << std::endl;
}

Character::~Character()
{
	std::cout << "Character Destructor called" << std::endl;
}
