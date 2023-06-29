/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/29 18:33:36 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/29 18:58:39 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"

int	main(int ac, char **av)
{
	Harl	kil;
	int		f;

	if (ac > 1)
	{
		f = 0;
		while (av[++f])
			kil.complain((std::string)av[f]);
	}
}