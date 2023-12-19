/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:09:00 by imontero          #+#    #+#             */
/*   Updated: 2023/12/19 12:13:16 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

int main()
{
	ClapTrap	josebas("Josebas");
	ClapTrap	kalletano("Kalletano");
	//ClapTrap	txutxi;
	ScavTrap	manolito("Manu");

	manolito.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	manolito.guardGate();
	kalletano.takeDamage(20);
	josebas.beRepaired(20);
	josebas.showStatus();
	kalletano.showStatus();
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);
	josebas.attack("Kalletano");
	kalletano.takeDamage(20);

	return (0);
}
