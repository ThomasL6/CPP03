/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ClapTrap.hpp                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:43:51 by thlefebv          #+#    #+#             */
/*   Updated: 2024/09/11 15:38:12 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>
#include <string>

class ClapTrap
{
	private:
			std::string m_name;
			int m_hitPoint;
			int m_energyPoint;
			int m_attackDamage;
			
	public:
			ClapTrap(std::string name);
			~ClapTrap();

			//Getters
			std::string getClaptrapName()const;
			int			getClaptrapHP()const;
			int 		getClaptrapEnergy()const;
			int			getClaptrapAttack()const;

			//setters
			void setClaptrapName(std::string name);
			void setClaptrapHP(int hp);
			void setClaptrapEnergy(int energy);
			void setClaptrapAttack(int attack);
			
			//Methodes
			void attack(const std::string& target);
			void takeDamage(unsigned int amount);
			void beRepaired(unsigned int amount);
};




#endif