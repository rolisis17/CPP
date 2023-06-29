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
	std::string arr[4];
	Harl	kil;
	int		f;

	arr[0] = "DEBUG";
	arr[1] = "INFO";
	arr[2] = "WARNING";
	arr[3] = "ERROR";
	if (ac == 2)
	{
		f = -1;
		while (++f < 4 && av[1] != arr[f]);
		switch(f)
		{
			case 0:
				kil.complain(arr[0]);
			case 1:
				kil.complain(arr[1]);
			case 2:
				kil.complain(arr[2]);
			case 3:
				kil.complain(arr[3]);
				break ;
			case 4:
				kil.complain((std::string)av[1]);
				break ;
		}
	}
}