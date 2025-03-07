/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: yyan-bin <yyan-bin@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/03/06 15:18:59 by yyan-bin          #+#    #+#             */
/*   Updated: 2025/03/06 17:11:16 by yyan-bin         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "replace.hpp"

int main(int argc, char **argv)
{
    if (argc != 4)
    {
        std::cerr << "follow: ./replace <filename> <s1> <s2>" << std::endl;
        return (1);
    }
    std::string filename = argv[1];
    std::ifstream infile(filename.c_str());
    if (!infile)
    {
        std::cerr << "can't open file <" << filename << ">!" << std::endl;
        return (1);
    }
    std::ofstream outfile((filename + ".replace").c_str());
    if (!outfile)
    {
        std::cerr << "ofstream error" << std::endl;
        return (1);
    }
    std::string s1 = argv[2];
    std::string s2 = argv[3];
    std::string line("");
    while (std::getline(infile, line))
    {
        replace(line, s1, s2);
        outfile << line << std::endl;
    }
    return (0);
}
