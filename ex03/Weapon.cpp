/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Weapon.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 03:33:07 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/11 03:56:44 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Weapon.hpp"
#include <iostream>

Weapon::Weapon(std::string type)
{
    this->type = type;
}

Weapon::~Weapon()
{}

std::string Weapon::getType()
{
    return (this->type);
}

void        Weapon::setType(std::string type)
{
    this->type = type;
}