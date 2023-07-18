/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanA.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:21:39 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 18:00:41 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANA_H
#define HUMANA_H

#include <iostream>
#include "Weapon.hpp"

class	HumanA
{
	private:
		std::string	name;
		Weapon		&Gun;
	
	public:
		HumanA(std::string name1, Weapon& Wpn);
		void	attack( void );
		~HumanA();
};

#endif
