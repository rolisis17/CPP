/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Cat.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:43:23 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Cat.hpp"

Cat::Cat() : Animal("Cat"), brain(new Brain())
{
	std::cout << type << " Default constructor called" << std::endl;
}

Cat::Cat( std::string type ) : Animal(type), brain(new Brain())
{
	std::cout << type << " Constructor called" << std::endl;
}

Cat::Cat( Cat& other) : Animal(other)
{
	std::cout << type << " Copy constructor called" << std::endl;
	*this = other;
}

Cat& Cat::operator=(Cat& other)
{
	std::cout << type << " Copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		type = other.type;
		delete brain;
		brain = new Brain(*(other.brain));
	}
	return (*this);
}

void	Cat::newIdea( std::string new_idea )
{
	brain->newIdea(new_idea);
}

std::string	Cat::showIdeaNbr( int ideaNbr )
{
	return(brain->showIdeaNbr(ideaNbr));
}

void	Cat::showIdeas( void )
{
	brain->showIdeas();
}

void	Cat::makeSound() const
{
	std::cout << "Miauahahahahahaha!" << std::endl;
}

Cat::~Cat()
{
	delete brain;
	std::cout << type << " Destructor called" << std::endl;
}
