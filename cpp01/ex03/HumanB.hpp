/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:52:21 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 18:00:45 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_H
#define HUMANB_H

#include <iostream>
#include "Weapon.hpp"

class	HumanB
{
	private:
		std::string	name;
		Weapon		*Gun;
	
	public:
		HumanB( std::string name1 );
		void	setWeapon( Weapon &Wpn );
		void	attack( void );
		~HumanB();
};

#endif
