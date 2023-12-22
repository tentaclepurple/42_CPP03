/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 11:50:22 by imontero          #+#    #+#             */
/*   Updated: 2023/12/19 20:48:42 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap(void) : ClapTrap()
{
	setHp(100);
	setEp(50);
	setAt(20);
	
	std::cout << "Default SC4V-TP has been created 🚧 Codename: " << this->getName() << std::endl;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
	setHp(100);
	setEp(50);
	setAt(20);

	std::cout << "SC4V-TP has been created 🚧 Codename: " << this->getName() << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap &copy) : ClapTrap(copy)
{
	std::cout << "SC4V-TP ⚙️ Copy constructor called" << std::endl;
	*this = copy;
}

ScavTrap::~ScavTrap(void)
{
	std::cout << "SC4V-TP 😵 " << this->getName() << " shutdown ☠️" << std::endl;
}

ScavTrap & ScavTrap::operator =(ScavTrap const &inst2)
{
	this->_name = inst2._name;
	this->_hitPoints = inst2._hitPoints;
	this->_energyPoints = inst2._energyPoints;
	this->_attackDamage = inst2._attackDamage;

	return (*this);
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
