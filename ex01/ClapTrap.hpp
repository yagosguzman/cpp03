/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/05 19:54:26 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/05 20:11:55 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
# define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
protected:
	std::string		_name;
	unsigned int	_hp;
	unsigned int	_energy;
	unsigned int	_dmg;

public:
	ClapTrap();
	ClapTrap(std::string name);
	~ClapTrap();
	void	attack(const std::string& target);
	void	takeDamage(unsigned int amount);
	void	beRepaired(unsigned int amount);
	std::string getName(void);
};

#endif