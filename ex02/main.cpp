/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:43:54 by thlefebv          #+#    #+#             */
/*   Updated: 2024/09/12 12:52:17 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

void clearScreen()
{
    std::cout << "\033[2J\033[1;1H";
}

int main()
{
	clearScreen();
	ClapTrap clap1("Clappy");
	ScavTrap Scav1("Scavy");
	FragTrap Frag1("Fraggy");
	FragTrap Frag2;
	std::cout << std::endl;
	Scav1.guardGate();
	std::cout << std::endl;
	clap1.attack("Nart");
	std::cout << std::endl;
	clap1.takeDamage(5);
	clap1.beRepaired(3);
	clap1.takeDamage(5);
	clap1.takeDamage(3);
	std::cout << std::endl;
	Scav1.attack("Bot");
	Scav1.takeDamage(3);
	std::cout << std::endl;
	Frag1.highFivesGuys();

}