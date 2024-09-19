/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:34:59 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/19 20:44:18 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main(void)
{
	ClapTrap clap("Pepe");
	ScavTrap scav("Joe");
	ScavTrap copy(scav);


	clap.beRepaired(5);
	clap.takeDamage(70);
	clap.beRepaired(5);
	scav.guardGate();
	scav.attack(clap.getName());
	clap.attack(scav.getName());
	copy.attack(scav.getName());
	copy.setName("Scavy");
	copy.attack(scav.getName());
	scav = copy;
	scav.attack(copy.getName());
	return (0);
}