/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongAnimal.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:43:23 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongAnimal.hpp"

WrongAnimal::WrongAnimal() : type("")
{
	std::cout << "WrongAnimal Default constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( std::string type ) : type(type)
{
	std::cout << "WrongAnimal Constructor called" << std::endl;
}

WrongAnimal::WrongAnimal( WrongAnimal& other) : type(other.type)
{
	std::cout << "WrongAnimal Copy constructor called" << std::endl;
	*this = other;
}

WrongAnimal& WrongAnimal::operator=(WrongAnimal& other)
{
	std::cout << "WrongAnimal Copy assignment constructor called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

void	WrongAnimal::makeSound() const
{
	if (type == "WrongCat")
		std::cout << "HAHAHAHAHAHmingau!" << std::endl;
	else if (type == "WrongDog")
		std::cout << "HAHAHAHAHaaauuuu!" << std::endl;
	else
		std::cout << "Wrong WTF!" << std::endl;

}

std::string	WrongAnimal::getType( void ) const
{
	return (this->type);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor called" << std::endl;
}
