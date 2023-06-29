/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:52:21 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/27 16:00:53 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "HumanA.hpp"

#ifndef HUMANB_H
#define HUMANB_H

class	HumanB
{
	private:
		std::string	name;
		Weapon		*Gun;
	
	public:
		HumanB( std::string name1 ) : name(name1), Gun(NULL) {};
		void	setWeapon( Weapon &Wpn );
		void	attack( void );
		~HumanB();
};

#endif
