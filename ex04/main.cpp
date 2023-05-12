/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mcatal-d <mcatal-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/12 15:24:42 by mcatal-d          #+#    #+#             */
/*   Updated: 2023/05/12 18:18:35 by mcatal-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// #include <iostream>
// #include <fstream>

// int main(int argc, char **argv)
// {
//     if (argc != 4)
//     {
//         std::cout << "Error: Wrong number of arguments" << std::endl;
//         return (1);
//     }
//     std::ifstream ifs(argv[1]);
//     std::ofstream ofs(argv[1] + std::string(".replace"));
//     std::string s1 = argv[2];
//     std::string s2 = argv[3];
//     std::string line;
//     if (!ifs.is_open() || !ofs.is_open())
//     {
//         std::cout << "Error: File not found" << std::endl;
//         return (1);
//     }
//     while (std::getline(ifs, line))
//     {
//         while (line.find(s1) != std::string::npos)
//             line.replace(line.find(s1), s1.length(), s2);
//         ofs << line << std::endl;
//     }
// }

#include <iostream>
#include <fstream>
#include <string>

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cout << "Error: Wrong number of arguments" << std::endl;
        return 1;
    }
    std::ifstream ifs(argv[1]);
    std::ofstream ofs((std::string(argv[1]) + ".replace").c_str());
    if (!ifs || !ofs)
    {
        std::cout << "Error: File not found" << std::endl;
        return 1;
    }

    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string line;
    std::string get_line;
    std::getline(ifs, get_line);
    
    int i = 0;
    while (!get_line.empty() && ++i < 100)
    {
        std::string::size_type pos = 0;
        while ((pos = line.find(s1, pos)) != std::string::npos)
        { std::cout << "pos: " << pos << std::endl;
            line = line.substr(0, pos) + s2 + line.substr(pos + s1.length());
            pos += s2.length();
        }
        if (std::getline(ifs, get_line))
            line += "\n";
        ofs << line;
    }

    return 0;
}
