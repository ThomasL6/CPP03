/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ScavTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 08:58:19 by thlefebv          #+#    #+#             */
/*   Updated: 2024/09/12 12:35:14 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClapTrap("Scav")
{
	setClaptrapHP(100);
	setClaptrapEnergy(50);
	setClaptrapAttack(20);
	std::cout << "ScavTrap has been created" << std::endl << std::endl;;
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)  
{
	setClaptrapHP(100);
	setClaptrapEnergy(50);
	setClaptrapAttack(20);
	std::cout << "ScavTrap " << name << " has been created" << std::endl << std::endl;;
}

ScavTrap::~ScavTrap()
{
	std::cout << "Scavtrap " << getClaptrapName() << " has been destroyed" << std::endl;
}


void ScavTrap::guardGate()
{
	std::cout << "ScavTrap " << getClaptrapName() << " is now in guard mod. It will keep the gate." << std::endl;
}