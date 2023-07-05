/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/25 21:21:10 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/05 18:00:49 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef	WEAPON_H
#define	WEAPON_H

#include <iostream>
#include <string>

class Weapon
{
	private:
		std::string type;
		
	public:
		Weapon( std::string wpn_type );
		std::string&	getType( void );
		void	setType( std::string new_type );
		~Weapon();
};

#endif