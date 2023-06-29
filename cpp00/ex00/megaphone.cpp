/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   megaphone.cpp                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/12 17:56:40 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/13 16:55:22 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>

int main(int ac, char **av)
{
	int	f;
	int	u;
	char res;

	f = 0;
	u = -1;
	if (!av[1])
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *" << std::endl;
	while (av[++f] && f < ac)
	{
		while (av[f][++u])
		{
			if (av[f][u] >= 'a' && av[f][u] <= 'z')
			{
				res = av[f][u] - 32;
				std::cout << res;
			}
			else
				std::cout << av[f][u];
		}
		u = -1;
	}
    return (0);
}