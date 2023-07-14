/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   MateriaSource.cpp                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/07/14 18:51:54 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/14 19:11:36 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "MateriaSource.hpp"

MateriaSource::MateriaSource( void ) : know({NULL}), knowNbr(0)
{
	std::cout << "Materia source created;" << std::endl;
}

MateriaSource& MateriaSource::operator=(MateriaSource& other)
{
	
}

void        MateriaSource::learnMateria( AMateria* materia)
{
	if (knowNbr < 4)
	{
		know[knowNbr] = materia;
		knowNbr++;
	}
	else
		std::cout << "Cannot learn more." << std::endl;
}

AMateria*   MateriaSource::createMateria( std::string const & materiaType )
{
	for (int f = 0; f < knowNbr; f++)
	{
		if (materiaType == know[f]->getType())
			return know[f]->clone();
	}
	return 0;
}