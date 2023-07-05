/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:21 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 18:04:03 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
	private:
		int	fixed_point_value;
		static const int	fract_bits = 8;

	public:
		Fixed( void );
		Fixed( const int f );
		Fixed( const float f );
		Fixed( const Fixed& other );
		Fixed&	operator =( const Fixed& other );
		bool	operator >( const Fixed& other )  const;
		bool	operator <( const Fixed& other )  const;
		bool	operator >=( const Fixed& other )  const;
		bool	operator <=( const Fixed& other )  const;
		bool	operator ==( const Fixed& other )  const;
		bool	operator !=( const Fixed& other )  const;
		Fixed	operator +( const Fixed& other ) const;
		Fixed	operator ++ ( void );
		Fixed	operator ++ ( int );
		Fixed	operator -( const Fixed& other ) const;
		Fixed	operator -- ( void );
		Fixed	operator -- ( int );
		Fixed	operator *( const Fixed& other ) const;
		Fixed	operator /( const Fixed& other ) const;
		int		getRawBits( void ) const;
		void	setRawBits( int const raw );
		float	toFloat( void ) const;
		int		toInt( void ) const;
		static Fixed&	min( Fixed& one, Fixed& two);
		static const Fixed&	min( const Fixed& one, const Fixed& two);
		static Fixed&	max( Fixed& one, Fixed& two);
		static const Fixed&	max( const Fixed& one, const Fixed& two);
		~Fixed( void );
};

std::ostream& operator << (std::ostream& os, const Fixed& fixedPoint);

#endif