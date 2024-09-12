/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: thlefebv <thlefebv@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/09/11 09:43:54 by thlefebv          #+#    #+#             */
/*   Updated: 2024/09/11 17:15:21 by thlefebv         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ClapTrap.hpp"

void clearScreen()
{
    std::cout << "\033[2J\033[1;1H";
}

int main()
{
	clearScreen();
	ClapTrap clap1("Clappy");
	ClapTrap clap2("Clappa");
	ClapTrap clap3("Clappo");

	clap1.attack("Nart");
	clap2.attack("Bart");
	clap3.attack("Tart");

	clap1.takeDamage(5);
	clap1.beRepaired(8);
	clap1.takeDamage(5);
	clap1.takeDamage(6);

	clap2.takeDamage(5);
	clap2.beRepaired(8);
	clap2.takeDamage(5);
	clap2.takeDamage(3);

	clap1.takeDamage(5);
	clap1.beRepaired(8);
	clap1.takeDamage(5);
	clap1.takeDamage(2);
}