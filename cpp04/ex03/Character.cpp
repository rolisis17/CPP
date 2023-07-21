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
	// std::cout << "Character Default constructor called" << std::endl;
	for (int f = 0; f < 4; f++)
		Slot[f] = NULL;
}

Character::Character(std::string name) : ICharacter(), Name(name), materiaNbr(0)
{
	std::cout << "A new Character " << name << " was created." << std::endl;
	for (int f = 0; f < 4; f++)
		Slot[f] = NULL;
}

Character::Character( Character& other)
{
	// std::cout << "Character Copy constructor called" << std::endl;
	*this = other;
}

Character&	Character::operator=( Character& other )
{
	// std::cout << "Character Copy assignment constructor called" << std::endl;
	if (this != &other)
	{
		Name = other.getName();
		for (int f = 0; f < 4; f++)
		{
			if (Slot[f] != NULL)
			{
				delete Slot[f];
				Slot[f] = NULL;
			}
		}
		for (int j = 0; j < 4; j++)
		{
			if (other.Slot[j] != NULL)
				Slot[j] = other.Slot[j]->clone();
		}
		materiaNbr = other.materiaNbr;
    	std::cout << getName() << " has been clone to " << other.getName() << std::endl;
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
	int f = -1;
	int	openslot = checkSlots();
	if (m == NULL)
		return ;
	if (materiaNbr < 4 && openslot < 4)
	{
		while (++f < 4 && Slot[f] != m);
		if (f < 4)
    		std::cout << "You cannot re-equip the same item." << std::endl;
		else
		{
			this->Slot[openslot] = m;
			materiaNbr++;
		}
    	std::cout << getName() << " has equip " << m->getType() << "." << std::endl;
	}
	else
		std::cout << "Inventory is full!" << std::endl;
}

void	Character::unequip(int idx)
{
	if (idx < 4)
	{
    	std::cout << getName() << " tryed to unequip slot " << idx << " item." << std::endl;
		if (Slot[idx] != NULL)
		{
			Slot[idx]->dropItem();
			Slot[idx] = NULL;
			materiaNbr--;
    		std::cout << getName() << " unequip and dropped slot 1 item." << std::endl;
		}
		else
			std::cout << "This slot is empty!" << std::endl;
	}
    std::cout << "Ground now have " << Slot[0]->getgroundItemsIndex() << " item(s) dropped." << std::endl;
}

int	Character::getmateriaNbr( void )
{
	return (materiaNbr);
}

void	Character::use(int idx, ICharacter& target)
{
    std::cout << getName() << " tryed to used slot " << idx << " item." << std::endl;
	if (Slot[idx] != NULL)
	{
		Slot[idx]->use(target);
    	std::cout << getName() << " used slot " << idx << " item." << std::endl;
    	std::cout << getName() << " has attacked " << target.getName() << " with slot " << idx << std::endl;
	}
	else
		std::cout << "Nothing to use in slot " << idx << "." << std::endl;
}

Character::~Character()
{
	for (int f = 0; f < 4; f++)
	{
		if (Slot[f] != NULL)
		{
			delete Slot[f];
			Slot[f] = NULL;
		}
	}
    std::cout << getName() << " has been deleted." << std::endl;
}
