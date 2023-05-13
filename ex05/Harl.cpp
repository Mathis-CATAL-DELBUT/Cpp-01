/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Harl.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 21:40:40 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/13 22:28:22 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.h"

Harl::Harl(void)
{
    ptr_fct[0] = &Harl::debug;
    ptr_fct[1] = &Harl::info;
    ptr_fct[2] = &Harl::warning;
    ptr_fct[3] = &Harl::error;
}

Harl::~Harl(void)
{
}

void	Harl::debug(void)
{
    std::cout <<
"[DEBUG] : I love having extra bacon for my \
7XL-double-cheese-triple-pickle-specialketchup \
burger. I really do !"
    << std::endl;
}

void	Harl::info(void)
{
    std::cout <<
"[INFO] : I cannot believe adding extra bacon \
costs more money. You didn’t put enough bacon \
in my burger ! If you did, I wouldn’t be asking for more !"
	<< std::endl;
}

void	Harl::warning(void)
{
    std::cout <<
"[WARNING] : I think I deserve to have some extra \
bacon for free. I’ve been coming for years whereas \
you started working here since last month"
	<< std::endl;
}

void	Harl::error(void)
{
    std::cout <<
"[ERROR] : This is unacceptable ! I want to speak to the manager now."
	<< std::endl;
}

void	Harl::complain(std::string level)
{
    std::string levels[4] = {"DEBUG", "INFO", "WARNING", "ERROR"};
    int i = -1;

    while (++i < 4)
        if (levels[i] == level)
            (this->*ptr_fct[i])();
}
