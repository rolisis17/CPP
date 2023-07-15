/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Character.cpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/30 18:13:19 by dcella-d          #+#    #+#             */
/*   Updated: 2023/07/04 15:43:23 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// extern AMateria *ground[100];
#include "Character.hpp"

Character::Character() : ICharacter(), Name("Nameless"), materiaNbr(0)
{
	std::cout << "Character Default constructor called" << std::endl;
	for (int f = 0; f < 4; f++)
		Slot[f] = NULL;
}

Character::Character(std::string name) : ICharacter(), Name(name), materiaNbr(0)
{
	std::cout << "Character Constructor called" << std::endl;
	for (int f = 0; f < 4; f++)
		Slot[f] = NULL;
}

Character::Character( Character& other)
{
	std::cout << "Character Copy constructor called" << std::endl;
	*this = other;
}

Character&	Character::operator=( Character& other )
{
	std::cout << "Character Copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		Name = other.getName();
		if (materiaNbr > 0)
		{
			for (int f = 0; f < 4; f++)
			{
				if (Slot[f] != NULL)
					delete Slot[f];
			}
		}
		for (int j = 0; j < 4; j++)
		{
			if (other.Slot[j] != NULL)
				Slot[j] = other.Slot[j]->clone();
		}
	}
	return (*this);
}

std::string const & Character::getName() const
{
	return (Name);
}

int	Character::checkSlots( void )
{
	int	f = 0;

	while (f < 4 && Slot[f] != NULL)
		f++;
	return (f);
}

void	Character::equip(AMateria* m)
{
	int	openslot = checkSlots();
	if (m == NULL)
		return ;
	if (materiaNbr < 4 && openslot < 4)
	{
		Slot[openslot] = m;
		materiaNbr++;
	}
	else
		std::cout << "Inventory is full!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 4)
	{
		if (Slot[idx] != NULL)
		{
			Slot[idx]->dropItem(Slot[idx]);
			Slot[idx] = NULL;
			materiaNbr--;
		}
		else
			std::cout << "This slot is empty!" << std::endl;
	}
}

int	Character::getmateriaNbr( void )
{
	return (materiaNbr);
}

void	Character::use(int idx, ICharacter& target)
{
	Slot[idx]->use(target);
}

Character::~Character()
{
	if (materiaNbr > 0)
	{
		for (int f = 0; f < 4; f++)
		{
			if (Slot[f] != NULL)
				delete Slot[f];
		}
	}
	std::cout << "Character Destructor called" << std::endl;
}
