/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   HumanB.hpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 03:52:52 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/11 04:07:58 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef HUMANB_HPP
#define HUMANB_HPP

#include "Weapon.hpp"
#include <iostream>

class HumanB
{
    public:
        HumanB(std::string name);
        ~HumanB();
        void        attack(void);
        void        setWeapon(Weapon &weapon);

    private:
        std::string name;
        Weapon      *weapon;
};

#endif