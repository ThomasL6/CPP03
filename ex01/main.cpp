/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:43:54 by thlefebv          #+#    #+#             */
/*   Updated: 2024/09/12 10:12:30 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

void clearScreen()
{
    std::cout << "\033[2J\033[1;1H";
}

int main()
{
	clearScreen();
	ClapTrap clap1("Clappy");
	ClapTrap clap2("Clappa");
	ScavTrap Scav1("Scavy");
	std::cout << std::endl;
	Scav1.guardGate();
	clap1.attack("Nart");
	clap2.attack("Bart");
	std::cout << std::endl;
	clap1.takeDamage(5);
	clap1.beRepaired(8);
	clap1.takeDamage(5);
	clap1.takeDamage(6);
	std::cout << std::endl;
	clap2.takeDamage(5);
	clap2.beRepaired(8);
	clap2.takeDamage(3);
	std::cout << std::endl;
	std::cout << std::endl;
	Scav1.attack("Bot");
	Scav1.takeDamage(3);


}