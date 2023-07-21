/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:43:23 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	std::cout << type << " Default constructor called" << std::endl;
}

Dog::Dog( std::string type ) : Animal(type)
{
	std::cout << type << " Constructor called" << std::endl;
}

Dog::Dog( Dog& other) : Animal(other)
{
	std::cout << type << " Copy constructor called" << std::endl;
	*this = other;
}

void	Dog::makeSound() const
{
	std::cout << "AUu!" << std::endl;
}

Dog& Dog::operator=(Dog& other)
{
	std::cout << "Dog Copy assignment constructor called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << type << " Destructor called" << std::endl;
}
