/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 01:02:47 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/11 02:37:58 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Zombie.hpp"
#include <iostream>
#include <string>



Zombie* newZombie(std::string name);
void randomChump(std::string name);

int main(void)
{
    Zombie *zombie = newZombie("First_zombie");
    zombie->announce();
    randomChump("Second_zombie");
    delete zombie;
}