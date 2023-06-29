/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:21:39 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/27 15:56:59 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"

#ifndef HUMANA_H
#define HUMANA_H

class	HumanA
{
	private:
		std::string	name;
		Weapon		&Gun;
	
	public:
		HumanA(std::string name1, Weapon& Wpn) : name(name1), Gun(Wpn) {};
		void	attack( void );
		~HumanA();
};

#endif
