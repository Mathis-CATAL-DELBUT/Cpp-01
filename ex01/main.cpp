/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 01:02:47 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/11 02:40:02 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>

Zombie* zombieHorde( int N, std::string name );

Zombie* newZombie(std::string name)
{
    Zombie *zombie = new Zombie();
    zombie->set_name(name);
    return (zombie);
}
void randomChump(std::string name)
{
    Zombie zombie;
    zombie.set_name(name);
    zombie.announce();
}

int main(void)
{
    Zombie *zombie = newZombie("First_zombie");
    zombie->announce();
    randomChump("Second_zombie");

    Zombie *horde = zombieHorde(10, "Soldat");
    delete [] horde;
    delete zombie;
}