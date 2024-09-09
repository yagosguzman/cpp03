/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:34:59 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/09 20:59:47 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	// ClapTrap clap("Yagus");
	// ScavTrap scav("Magus");
	DiamondTrap dt("EvilYagus");

	dt.highFivesGuys();
	// clap.beRepaired(5);
	// clap.takeDamage(70);
	// clap.beRepaired(5);
	// scav.guardGate();
	// scav.attack(clap.getName());
	// clap.attack(scav.getName());
	return (0);
}