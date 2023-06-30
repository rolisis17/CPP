/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/30 19:53:28 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed(int f) : fixed_point_value(f)
{
	std::cout << "Constructor called" << std::endl;
}

Fixed::Fixed( Fixed& other) : fixed_point_value(other.fixed_point_value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=(Fixed& other)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &other)
		fixed_point_value = other.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void )
{
	std::cout << "getRawBits member function called" << std::endl;
	return (fixed_point_value);
}

void	Fixed::setRawBits( int const raw )
{
	std::cout << "setRawBits member function called" << std::endl;
	fixed_point_value = raw;
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}
