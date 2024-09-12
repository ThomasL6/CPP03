/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.cpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:43:48 by thlefebv          #+#    #+#             */
/*   Updated: 2024/09/11 16:55:16 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

ClapTrap::ClapTrap(std::string name):m_name(name), m_hitPoint(10), m_energyPoint(10), m_attackDamage()
{
	std::cout << "creation of Claptrap " << this->m_name << std::endl << std::endl;
}

ClapTrap::~ClapTrap()
{
	std::cout << std::endl << "Claptrap " << this->m_name << " has been destroyed" << std::endl;
}

//Getters

std::string ClapTrap::getClaptrapName()const
{
	return(this->m_name);
}

int ClapTrap::getClaptrapHP()const
{
	return(this->m_hitPoint);
}

int ClapTrap::getClaptrapEnergy()const
{
	return(this->m_energyPoint);
}

int ClapTrap::getClaptrapAttack()const
{
	return(this->m_attackDamage);
}

//Setters

void ClapTrap::setClaptrapName(std::string name)
{
	this->m_name = name;
	return;
}

void ClapTrap::setClaptrapHP(int hp)
{
	this->m_hitPoint = hp;
	return;
}

void ClapTrap::setClaptrapEnergy(int energy)
{
	this->m_energyPoint = energy;
	return;
}

void ClapTrap::setClaptrapAttack(int attack)
{
	this->m_attackDamage = attack;
	return;
}

//Methodes

void ClapTrap::attack(const std::string& target)
{
	
	std::cout << "ClapTrap " << getClaptrapName() << " attacks " << target <<", dealing " 
		<< getClaptrapAttack() << " points of attack" <<std::endl;
}

void ClapTrap::takeDamage(unsigned int amount)
{
	std::cout << "ClapTrap " << this->m_name;
	if (this->m_hitPoint == 0)
		std::cout << " is already dead, stop it! Or keep going he is annoying when alive.";
	if (amount > static_cast <unsigned int>(this->m_hitPoint))
	{
		this->m_hitPoint = 0;
		std::cout << " takes " << this->m_hitPoint << " damage and dies!" << std::endl;
	}
	else
	{
		this->m_hitPoint -= amount;
		std::cout << " takes " << amount << " damage, " << this->m_hitPoint << " hp remaining!" << std::endl;
	}
}

void ClapTrap::beRepaired(unsigned int amount)
{
	this->m_hitPoint += amount;
	if(this->m_hitPoint > 10)
	{
		this->m_hitPoint = 10;
		std::cout << "He is annoying enough no need to boost him !" << std::endl;
		std::cout << this->m_hitPoint << " hp is enough !" << std::endl;
	}
	else
		std::cout << "ClapTrap " << this->m_name << " uses his tools to fixed the damages. It regain " << amount
		<< " hp. It has now " << this->m_hitPoint << " hp." << std::endl;
}
