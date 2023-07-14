/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Animal.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:43:23 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Animal.hpp"

Animal::Animal() : type("")
{
	std::cout << "Animal Default constructor called" << std::endl;
}

Animal::Animal( std::string type ) : type(type)
{
	std::cout << "Animal Constructor called" << std::endl;
}

Animal::Animal( Animal& other) : type(other.type)
{
	std::cout << "Animal Copy constructor called" << std::endl;
	*this = other;
}

Animal& Animal::operator=(Animal& other)
{
	std::cout << "Animal Copy assignment constructor called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void	Animal::makeSound() const
{
	std::cout << "???????????!" << std::endl;
}

std::string	Animal::getType( void ) const
{
	return (this->type);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor called" << std::endl;
}
