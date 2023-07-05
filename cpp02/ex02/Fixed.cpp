/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 20:43:39 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Fixed.hpp"

Fixed::Fixed() : fixed_point_value(0)
{
}

Fixed::Fixed( const int f )
{
	fixed_point_value = static_cast<int>(roundf(f * (1 << fract_bits)));
}

Fixed::Fixed( const float f )
{
	fixed_point_value = static_cast<int>(roundf(f * (1 << fract_bits)));
}

Fixed::Fixed( const Fixed& other) : fixed_point_value(other.fixed_point_value)
{
	*this = other;
}

Fixed& Fixed::operator=( const Fixed& other)
{
	if (this != &other)
		fixed_point_value = other.getRawBits();
	return (*this);
}

bool	Fixed::operator > ( const Fixed& other) const
{
	return (this->toFloat() > other.toFloat());
}

bool	Fixed::operator < ( const Fixed& other) const
{
	return (this->toFloat() < other.toFloat());
}

bool	Fixed::operator >= ( const Fixed& other) const
{
	return (this->toFloat() >= other.toFloat());
}

bool	Fixed::operator <= ( const Fixed& other) const
{
	return (this->toFloat() <= other.toFloat());
}

bool	Fixed::operator == ( const Fixed& other) const
{
	return (this->toFloat() == other.toFloat());
}

bool	Fixed::operator != ( const Fixed& other) const
{
	return (this->toFloat() != other.toFloat());
}

Fixed Fixed::operator + ( const Fixed& other) const
{
	return Fixed(this->toFloat() + other.toFloat());
}

Fixed	Fixed::operator ++ ( void )
{
	fixed_point_value += 1;
	return (*this);
}

Fixed	Fixed::operator ++ ( int )
{
	Fixed temp(*this);
	fixed_point_value += 1;
	return (temp);
}

Fixed Fixed::operator - ( const Fixed& other) const
{
	return Fixed(this->toFloat() - other.toFloat());
}

Fixed	Fixed::operator -- ( void )
{
	fixed_point_value += 1;
	return (*this);
}

Fixed	Fixed::operator -- ( int )
{
	Fixed temp(*this);
	fixed_point_value += 1;
	return (temp);
}

Fixed Fixed::operator * ( const Fixed& other) const
{
	return (Fixed(this->toFloat() * other.toFloat()));
}

Fixed Fixed::operator / ( const Fixed& other) const
{
	return Fixed(this->toFloat() / other.toFloat());
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
}

std::ostream& operator << (std::ostream& os, const Fixed& fixed)
{
	os << fixed.toFloat();
	return os;
}

Fixed&	Fixed::min( Fixed& one, Fixed& two)
{
	return (one.getRawBits() < two.getRawBits() ? one : two);
}

const Fixed&	Fixed::min( const Fixed& one, const Fixed& two)
{
	return (one.getRawBits() < two.getRawBits() ? one : two);
}

Fixed&	Fixed::max( Fixed& one, Fixed& two)
{
	return (one.getRawBits() > two.getRawBits() ? one : two);
}

const Fixed&	Fixed::max( const Fixed& one, const Fixed& two)
{
	return (one.getRawBits() > two.getRawBits() ? one : two);
}
