/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/11 02:41:51 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/11 02:50:52 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>

int main()
{
    std::string string = "HI THIS IS BRAIN"; 
    std::string *stringPTR = &string;
    std::string &stringREF = string;

    std::cout
    << "adresse de la string en mémoire : " << &string << std::endl
    << "adresse stockée dans stringPTR : " << stringPTR << std::endl
    << "adresse stockée dans stringREF : " << &stringREF << std::endl
    << std::endl
    << "valeur de la string : " << string << std::endl
    << "valeur pointée par stringPTR : " << *stringPTR << std::endl
    << "valeur pointée par stringREF : " << stringREF << std::endl;
}