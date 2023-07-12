/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   WrongCat.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:43:23 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "WrongCat.hpp"

WrongCat::WrongCat() : WrongAnimal("WrongCat")
{
	std::cout << type << " Default constructor called" << std::endl;
}

WrongCat::WrongCat( std::string type ) : WrongAnimal(type)
{
	std::cout << type << " Constructor called" << std::endl;
}

WrongCat::WrongCat( WrongCat& other) : WrongAnimal(other)
{
	std::cout << type << " Copy constructor called" << std::endl;
	*this = other;
}

WrongCat& WrongCat::operator=(WrongCat& other)
{
	std::cout << type << " Copy assignment constructor called" << std::endl;
	if (this != &other)
		type = other.type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << type << " Destructor called" << std::endl;
}
