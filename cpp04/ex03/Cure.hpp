/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cure.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:21 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 18:03:45 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CURE_HPP
#define CURE_HPP

#include <iostream>
#include "AMateria.hpp"

ICharacter;

class Cure : public AMateria
{
	private:

	public:
		Cure( void );
		Cure( int f );
		Cure( Cure& other );
		Cure&	operator=( Cure& other );
		Cure&	clone( void ) const;
		void	use( ICharacter& );
		~Cure( void );
};

#endif