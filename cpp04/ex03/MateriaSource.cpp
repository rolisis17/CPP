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

MateriaSource::MateriaSource( void ) : IMateriaSource(), knowNbr(0)
{
	std::cout << "Materia source created;" << std::endl;
	for (int f = 0; f < 4; f++)
		know[f] = NULL;
}

MateriaSource& MateriaSource::operator=(MateriaSource& other)
{
	for (int f = 0; f < 4; f++)
	{
		if (know[f] != NULL)
			delete know[f];
	}
	for (int u = 0; u < 4; u++)
	{
		if (other.know[u] != NULL)
			know[u] = other.know[u]->clone();
	}
	return (*this);
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