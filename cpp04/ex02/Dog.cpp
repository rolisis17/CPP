/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Dog.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:43:23 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Dog.hpp"

Dog::Dog() : Animal("Dog")
{
	brain = new Brain();
	std::cout << type << " Default constructor called" << std::endl;
}

Dog::Dog( std::string type ) : Animal(type)
{
	brain = new Brain();
	std::cout << type << " Constructor called" << std::endl;
}

Dog::Dog( Dog& other) : Animal(other)
{
	std::cout << type << " Copy constructor called" << std::endl;
	*this = other;
}

Dog& Dog::operator=(Dog& other)
{
	std::cout << "Dog Copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		type = other.type;
		delete brain;
		brain = new Brain(*(other.brain));
	}
	return (*this);
}

void	Dog::newIdea( std::string new_idea )
{
	brain->newIdea(new_idea);
}

std::string	Dog::showIdeaNbr( int ideaNbr )
{
	return(brain->showIdeaNbr(ideaNbr));
}

void	Dog::showIdeas( void )
{
	brain->showIdeas();
}

void	Dog::makeSound() const
{
	if (type == "Cat")
		std::cout << "Miauahahahahahaha!" << std::endl;
	else if (type == "Dog")
		std::cout << "Auauuuaaahahahahahha!" << std::endl;
	else
		std::cout << "WTF!" << std::endl;
}

Dog::~Dog()
{
	delete brain;
	std::cout << type << " Destructor called" << std::endl;
}
