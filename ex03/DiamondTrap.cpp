/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:50:43 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/09 21:00:30 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap(std::string name) : ClapTrap(name + "_clap_name"), FragTrap(name), ScavTrap(name), _name(name)
{
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
