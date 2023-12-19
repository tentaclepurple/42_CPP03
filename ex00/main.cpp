/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: imontero <imontero@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/19 09:09:00 by imontero          #+#    #+#             */
/*   Updated: 2023/12/19 10:03:07 by imontero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

int main()
{
	ClapTrap	josebas("Josebas");
	ClapTrap	kalletano("Kalletano");
	ClapTrap	txutxi;

	josebas.attack("Kalletano");
	josebas.attack("Kalletano");
	josebas.showStatus();
	josebas.beRepaired(20);
	kalletano.showStatus();
	josebas.attack("Kalletano");
	josebas.attack("Kalletano");
	josebas.attack("Kalletano");
	josebas.attack("Kalletano");
	josebas.attack("Kalletano");
	josebas.attack("Kalletano");
	josebas.attack("Kalletano");
	josebas.attack("Kalletano");
	josebas.attack("Kalletano");
	josebas.attack("Kalletano");

	return (0);
}
