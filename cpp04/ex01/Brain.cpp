/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Brain.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/12 17:43:45 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Brain.hpp"

Brain::Brain()
{
	std::cout << "Brain Default constructor called" << std::endl;
}

Brain::Brain( std::string new_idea )
{
	std::cout << "Brain Constructor called" << std::endl;
	newIdea(new_idea);
}

Brain::Brain( Brain& other)
{
	std::cout << "Brain Copy constructor called" << std::endl;
	*this = other;
}

Brain& Brain::operator=(Brain& other)
{
	int	f;
	
	f = -1;
	std::cout << "Brain Copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		while (++f < 100 && other.ideas[f] != "")
			this->ideas[f] = other.showIdeaNbr(f);
	}
	return (*this);
}

void	Brain::newIdea( std::string new_idea )
{
	int	IdeasCounter = 0;

	if (new_idea == "")
		return;
	while (IdeasCounter < 100 && showIdeaNbr(IdeasCounter) != "")
		IdeasCounter++;
	if (IdeasCounter == 100)
		return;
	ideas[IdeasCounter] = new_idea;
}

std::string	Brain::showIdeaNbr( int ideaNbr )
{
	return(ideas[ideaNbr % 100]);
}

void	Brain::showIdeas( void )
{
	int	counter = 0;

	while (counter < 100  && ideas[counter] != "")
		std::cout << ideas[counter++] << std::endl;
}

Brain::~Brain()
{
	std::cout << "Brain Destructor called" << std::endl;
}
