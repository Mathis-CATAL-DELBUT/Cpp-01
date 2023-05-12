/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   zombieHorde.cpp                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:16:02 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/11 02:33:47 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name)
{
    Zombie *zombie = new Zombie[N];
    for(int i = 0; i < N; i++)
    {
        zombie[i].set_name(name);
        zombie[i].announce();
    }
    return (zombie);
}