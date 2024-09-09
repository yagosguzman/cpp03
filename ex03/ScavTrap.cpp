/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:59:38 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/09 20:18:25 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"
#include "ClapTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	_hp = 100;
	_energy = 50;
	_dmg = 20;
	std::cout << "ScavTrap constructor called, " << _name << " ScavTrap created"
		<< std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hp = 100;
	_energy = 50;
	_dmg = 20;
	std::cout << "ScavTrap constructor called, " << _name << " ScavTrap created"
		<< std::endl;
}

ScavTrap::ScavTrap(ScavTrap& copy)
{
	std::cout << "Copy constructor for ScapTrap called" << std::endl;
	_name = copy._name;
	_hp = copy._hp;
	_energy = copy._energy;
	_dmg = copy._dmg;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}


void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}

void	ScavTrap::attack(const std::string& target)
{
	if (_hp < 1)
		std::cout << "ScavTrap " << _name << " can't attack because it has no HP left" << std::endl;
	else if (_energy > 0)
	{
		_energy--;
		std::cout << "ScavTrap " << _name << " attacks " << target
			<< ", causing " << _dmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "ScavTrap " << _name << " can't attack because it has no energy left" << std::endl;
}