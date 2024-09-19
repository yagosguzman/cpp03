/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:34:59 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/19 22:04:13 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main(void)
{
	DiamondTrap dt("Frankie");

	dt.highFivesGuys();
	dt.beRepaired(5);
	dt.takeDamage(70);
	dt.guardGate();
	dt.attack("Pepe");
	dt.whoAmI();
	return (0);
}