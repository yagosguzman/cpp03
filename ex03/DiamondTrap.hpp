/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   DiamondTrap.hpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:31:36 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/23 18:13:44 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef DIAMONDTRAP_HPP
# define DIAMONDTRAP_HPP

#include <iostream>
#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class DiamondTrap : public FragTrap, public ScavTrap
{
private:
	std::string _name;
public:
	DiamondTrap(void);
	DiamondTrap(std::string name);
	DiamondTrap(DiamondTrap& copy);
	~DiamondTrap();

	DiamondTrap& operator=(const DiamondTrap& src);

	void	whoAmI(void);
	using ScavTrap::attack;
};

#endif