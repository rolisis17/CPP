/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 17:49:06 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_value(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Fixed::Fixed( const int f )
{
	fixed_point_value = static_cast<int>(roundf(f * (1 << fract_bits)));
	std::cout << "Int constructor called" << std::endl;
}

Fixed::Fixed( const float f )
{
	fixed_point_value = static_cast<int>(roundf(f * (1 << fract_bits)));
	std::cout << "Float constructor called" << std::endl;
}

Fixed::Fixed( const Fixed& other) : fixed_point_value(other.fixed_point_value)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = other;
}

Fixed& Fixed::operator=( const Fixed& other)
{
	std::cout << "Copy assignment constructor called" << std::endl;
	if (this != &other)
		fixed_point_value = other.getRawBits();
	return (*this);
}

int		Fixed::getRawBits( void ) const
{
	return (fixed_point_value);
}

void	Fixed::setRawBits( int const raw )
{
	fixed_point_value = raw;
}

float	Fixed::toFloat( void ) const
{
	return ((float)fixed_point_value / (1 << fract_bits));
}

int		Fixed::toInt( void ) const
{
	return ((int)fixed_point_value / (1 << fract_bits));
}

Fixed::~Fixed()
{
	std::cout << "Destructor called" << std::endl;
}

std::ostream& operator << (std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}
