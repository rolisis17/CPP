/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:21 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/30 19:52:34 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

#ifndef	FIXED_HPP
#define FIXED_HPP

class Fixed
{
	private:
		int	fixed_point_value;
		static const int	fract_bits = 8;

	public:
		Fixed( void );
		Fixed( int f );
		Fixed( Fixed& other );
		Fixed&	operator=( Fixed& other );
		int		getRawBits( void );
		void	setRawBits( int const raw );
		~Fixed( void );
};

#endif