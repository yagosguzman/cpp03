/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:54:01 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/09 20:03:22 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(void)
{
	_name = "unnamed";
	_hp = 10;
	_energy = 10;
	_dmg = 0;
	std::cout << "Default constructor called, " << _name << " ClapTrap created"
		<< std::endl;
}

ClapTrap::ClapTrap(std::string name) : _hp(10), _energy(10), _dmg(0)
{
	this->_name = name;
	std::cout << "Default constructor called, " << _name << " ClapTrap created"
		<< std::endl;
}

ClapTrap::ClapTrap(ClapTrap& copy)
{
	std::cout << "Copy constructor for Claptrap called" << std::endl;
	_name = copy._name;
	_hp = copy._hp;
	_energy = copy._energy;
	_dmg = copy._dmg;
}

ClapTrap::~ClapTrap()
{
   std::cout << "ClapTrap destructor called" << std::endl;
}

void	ClapTrap::attack(const std::string& target)
{
	if (_hp < 1)
		std::cout << "ClapTrap " << _name << " can't attack because it has no HP left" << std::endl;
	else if (_energy > 0)
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

std::string ClapTrap::getName(void)
{
	return (this->_name);
}
