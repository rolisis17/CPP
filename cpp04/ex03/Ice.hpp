/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Ice.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:21 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 18:03:45 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	ICE_HPP
#define ICE_HPP

#include <iostream>
#include "AMateria.hpp"

ICharacter;

class Ice : public AMateria
{
	private:

	public:
		Ice( void );
		Ice( std::string type );
		Ice( Ice& other );
		Ice&	operator=( Ice& other );
		Ice&	clone( void ) const;
		~Ice( void );
};

#endif