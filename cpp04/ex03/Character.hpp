/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:21 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 18:03:45 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CHARACTER_HPP
#define CHARACTER_HPP

#include <iostream>
#include "AMateria.hpp"
#include "ICharacter.hpp"

class Character : public ICharacter
{
	private:
		std::string	Name;

	public:
		Character( void );
		Character( std::string type );
		Character( Character& other );
		ICharacter&	operator=( ICharacter& other );
		std::string const & getName() const;
		void equip(AMateria* m);
		void unequip(int idx);
		void	use( ICharacter& );
		~Character( void );
};

#endif