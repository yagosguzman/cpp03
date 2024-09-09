/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysanchez <ysanchez@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/09 20:10:49 by ysanchez          #+#    #+#             */
/*   Updated: 2024/09/09 21:02:10 by ysanchez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FRAGTRAP_HPP
# define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : virtual public ClapTrap
{

public:
	FragTrap(void);
	FragTrap(std::string name);
	FragTrap(FragTrap& copy);
	~FragTrap();
	void	highFivesGuys(void);
	void	attack(const std::string& target);
};

#endif