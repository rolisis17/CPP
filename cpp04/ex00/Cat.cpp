/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:43:23 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat")
{
	std::cout << type << " Default constructor called" << std::endl;
}

Cat::Cat( std::string type ) : Animal(type)
{
	std::cout << type << " Constructor called" << std::endl;
}

Cat::Cat( Cat& other) : Animal(other)
{
	std::cout << type << " Copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(Cat& other)
{
	std::cout << type << " Copy assignment constructor called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << type << " Destructor called" << std::endl;
}
