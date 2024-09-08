/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:59:38 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/05 21:26:43 by ysanchez         ###   ########.fr       */
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
	this->_name = name;
	_hp = 100;
	_energy = 50;
	_dmg = 20;
	std::cout << "ScavTrap constructor called, " << _name << " ScavTrap created"
		<< std::endl;
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrap destructor called" << std::endl;
}


void	ScavTrap::guardGate(void)
{
	std::cout << "ScavTrap " << _name << " is now in Gate keeper mode" << std::endl;
}