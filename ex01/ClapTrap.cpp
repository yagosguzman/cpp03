/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:54:01 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/05 21:07:02 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name) : _hp(100), _energy(50), _dmg(20)
{
	std::cout << "Default constructor called" << std::endl;
	this->_name = name;
}

ClapTrap::~ClapTrap()
{
   std::cout << "Destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_energy > 0)
	{
		_energy--;
		std::cout << "ClapTrap " << _name << " attacks " << target
			<< ", causing " << _dmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "ClapTrap " << _name << " can't attack because it has no energy left" << std::endl;

}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_hp > 0)
	{
		if (amount > _hp)
			_hp = 0;
		else
			_hp -= amount;
		std::cout << "ClapTrap " << _name << " receives " << amount 
			<< " points of damage.\nHP left: " << _hp << std::endl;
		if (_hp == 0)
			std::cout << "ClapTrap " << _name << " is dead :(" << std::endl;
	}
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy > 0 && _hp > 0)
	{
		_energy--;
		_hp += amount;
		std::cout << "ClapTrap " << _name << " has repaired itself for "
			<< amount << " points of HP.\nHP left: " << _hp << "\nEnergy left: "
			<< _energy << std::endl;
	}
	else
	{
		if (_hp == 0)
			std::cout << "ClapTrap " << _name << " can't repair itself because it has no HP left" << std::endl;
		else if (_energy == 0)
			std::cout << "ClapTrap " << _name << " can't repair itself because it has no energy left" << std::endl;
	}
}