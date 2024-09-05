/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 21:00:04 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/05 21:32:59 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef SCAVTRAP_HPP
# define SCAVTRAP_HPP

#include "ClapTrap.hpp"

class ScavTrap : public ClapTrap
{
private:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_energy;
	unsigned int	_dmg;

public:
	// ScavTrap : public ClapTrap(/* args */);
	// ~ScavTrap : public ClapTrap();
	void	guardGate(void);
};

#endif