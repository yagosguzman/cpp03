/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:50:43 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/23 18:16:09 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(void) : ClapTrap(), FragTrap(), ScavTrap(), _name("unnamed")
{
	ClapTrap::_name += "_clap_name";
	_hp = FragTrap::_hp;
	_energy = ScavTrap::_energy;
	_dmg = FragTrap::_dmg;
	std::cout << "DiamondTrap constructor called, " << _name << " DiamondTrap created"
		<< std::endl;
}

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name), FragTrap(name), ScavTrap(name), _name(name)
{
	ClapTrap::_name = name + "_clap_name";
	_hp = FragTrap::_hp;
	_energy = ScavTrap::_energy;
	_dmg = FragTrap::_dmg;
	std::cout << "DiamondTrap constructor called, " << _name << " DiamondTrap created"
		<< std::endl;
}

DiamondTrap::DiamondTrap(DiamondTrap& copy)
{
	std::cout << "Copy constructor for DiamondTrap called" << std::endl;
	_name = copy._name;
	_hp = copy._hp;
	_energy = copy._energy;
	_dmg = copy._dmg;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap destructor called" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& src)
{
	_name = src.getName();
	_hp = src._hp;
	_energy = src._energy;
	_dmg = src._dmg;
	return (*this);
}


void	DiamondTrap::whoAmI(void)
{
	std::cout << "My true name is " << this->_name << std::endl;
	std::cout << "My ClapTrap name is " << ClapTrap::_name << std::endl;
}