/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   FragTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/12 12:16:05 by thlefebv          #+#    #+#             */
/*   Updated: 2024/09/12 13:07:36 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap("Frag") 
{
	setClaptrapHP(100);
	setClaptrapEnergy(50);
	setClaptrapAttack(20);
	std::cout << "FragTrap has been created" << std::endl;
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
	setClaptrapHP(100);
	setClaptrapEnergy(100);
	setClaptrapAttack(30);
	std::cout << "FragTrap " << name << " has been created" << std::endl;
}
FragTrap::~FragTrap()
{
	std::cout << "FragTrap " << getClaptrapName() << " has been destroyed" << std::endl;
}

void FragTrap::highFivesGuys(void)
{
	std::cout << "FragTrap " << getClaptrapName() << " want to highfive" << std::endl;
}
