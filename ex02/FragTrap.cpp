/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:16:06 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/09 20:24:34 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(void) : ClapTrap()
{
	_hp = 100;
	_energy = 100;
	_dmg = 30;
	std::cout << "FragTrap constructor called, " << _name << " FragTrap created"
		<< std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	_name = name;
	_hp = 100;
	_energy = 100;
	_dmg = 30;
	std::cout << "FragTrap constructor called, " << _name << " FragTrap created"
		<< std::endl;
}

FragTrap::FragTrap(FragTrap& copy)
{
	std::cout << "Copy constructor for FragTrap called" << std::endl;
	_name = copy._name;
	_hp = copy._hp;
	_energy = copy._energy;
	_dmg = copy._dmg;
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap destructor called" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << _name << " raise its arm to high five you, "
		<< "don't disappoint him :(" << std::endl;
}

void	FragTrap::attack(const std::string& target)
{
	if (_hp < 1)
		std::cout << "FragTrap " << _name << " can't attack because it has no HP left" << std::endl;
	else if (_energy > 0)
	{
		_energy--;
		std::cout << "FragTrap " << _name << " attacks " << target
			<< ", causing " << _dmg << " points of damage!" << std::endl;
	}
	else
		std::cout << "FragTrap " << _name << " can't attack because it has no energy left" << std::endl;
}