/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 20:34:59 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/19 20:35:03 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main(void)
{
	ClapTrap first("Yagus");

	ClapTrap second;

	second.attack(first.getName());
	first.beRepaired(5);
	first.takeDamage(70);
	first.beRepaired(5);
	first.attack(second.getName()); //  Can't attack bc has no HP
	first = second; // Now there's 2 unnamed ClapTraps with HP
	first.setName("OG ClapTrap");
	first.attack(second.getName());

	return (0);
}