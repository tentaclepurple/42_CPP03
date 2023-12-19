/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 12:49:11 by imontero          #+#    #+#             */
/*   Updated: 2023/12/19 14:04:39 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap(std::string name)
{
	this->setName(name);
	this->setHp(100);
	this->setEp(100);
	this->setAt(30);
	std::cout << "FragTrap 👾 : " << this->getName() << " assembled!" << std::endl;
}

FragTrap::~FragTrap(void)
{
	std::cout << "FragTrap " << this->getName() << " 👎" << std::endl;
}

void	FragTrap::highFivesGuys(void)
{
	std::cout << this->getName() << " 📢 GIVE ME 5 MTHRFKR! 🖐🖐🖐🖐🖐" << std::endl;
}
