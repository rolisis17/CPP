/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Zombie.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 16:33:34 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/25 20:57:02 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string>
#include <iostream>

#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

class Zombie
{
	public:
		Zombie();
		void	new_Zombie( std::string name );
		void	announce( void );
		~Zombie();

	private:
		std::string	name;
};

Zombie*	zombieHorde( int N, const std::string name );

#endif