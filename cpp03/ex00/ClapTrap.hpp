/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:21 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 20:45:23 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	private:
		std::string		name;
		unsigned int	hitpoints;
		unsigned int	energypoints;
		unsigned int	atkdamage;

	public:
		ClapTrap( void );
		ClapTrap( std::string name1 );
		ClapTrap( ClapTrap& other );
		ClapTrap&	operator = ( const ClapTrap& other );
		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
		~ClapTrap( void );
};

#endif