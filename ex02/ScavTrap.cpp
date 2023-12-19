/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:50:22 by imontero          #+#    #+#             */
/*   Updated: 2023/12/19 12:34:09 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(std::string name)
{
	this->setName(name);
	std::cout << "SC4V-TP has been created 🚧 Codename: " << this->getName() << std::endl;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SC4V-TP 😵 " << this->getName() << " shutdown ☠️" << std::endl;
}

void	ScavTrap::attack(const std::string &target)
{
	if (this->isWorking())
	{
		std::cout << "🪓 SC4V-TP " << this->getName() << " attacks " << target;
		std::cout << std::endl;
		this->setEp(-1);
	}
	else
		std::cout << "🚫 " << this->getName() << " is not working" << std::endl;
}

void	ScavTrap::guardGate(void)
{
	std::cout << this->getName() << " is now in Gate Keeper mode 🥅" << std::endl;
}
