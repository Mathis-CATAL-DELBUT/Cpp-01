/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/13 22:59:26 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/13 23:09:01 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "Harl.hpp"
#include <iostream>

int	Level( std::string arg )
{
	std::string	levels[] = { "DEBUG", "INFO", "WARNING", "ERROR" };
	int i = -1;
    while (++i < 4)
        if (levels[i] == arg)
            return ( i );
	return ( -1 );

}

int		main(int argc, char **argv)
{
    Harl	harl;
    if (argc != 2)
        return(std::cout << "incorrect number of arguments" << std::endl, 1);
    switch (Level(argv[1]))
    {
        case 0:
            harl.complain("DEBUG");
        case 1:
            harl.complain("INFO");
        case 2:
            harl.complain("WARNING");
        case 3:
            harl.complain("ERROR");
            break;
        default:
            std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    return (0);
}
