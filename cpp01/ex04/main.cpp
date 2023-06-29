/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dcella-d <dcella-d@student.42lisboa.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/27 16:40:39 by dcella-d          #+#    #+#             */
/*   Updated: 2023/06/29 18:38:52 by dcella-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <cstdlib>
#include <string>
#include <iostream>
#include <filesystem>

#include <fstream>
#include <sstream>

// int	main(int ac, char **av)
// {
// 	int	exit_code;
// 	std::string	res;
	
// 	if (ac == 4)
// 	{
// 		res = "cat " + (std::string)av[1] + " > "  + (std::string)av[1] + ".replace" + "; sed -i 's/" + (std::string)av[2] + "/" + (std::string)av[3] + "/g' " + (std::string)av[1] + ".replace";
// 		std::cout << res << std::endl;
// 		exit_code = system(res.c_str());
// 		if (exit_code == -1)
// 			std::cout << "error" << std::endl;
// 	}
// 	else
// 		std::cout << "error" << std::endl;
// }

static void	find_replace(std::string& line, const std::string& word, const std::string& replace)
{
	size_t	pos = line.find(word);
	while (word != "" && pos != std::string::npos)
	{
		line = line.substr(0, pos) + replace + line.substr(pos + word.length());
		pos = line.find(word, pos + replace.length());
	}
}

int	main(int ac, char **av)
{
	std::ifstream	file(av[1], std::ios::binary);
	std::string		replace_file;
	std::string		line;

	if (ac == 4 && file.is_open())
	{
		replace_file = (std::string)av[1] + ".replace";
		std::ofstream new_file(replace_file.c_str(), std::ios::binary);
		if (new_file.is_open())
		{
			while (std::getline(file, line))
			{
				find_replace(line, (std::string)av[2], (std::string)av[3]);
				new_file << line << std::endl;
			}
			file.close();
			new_file.close();
		}
		else
			std::cout << "Fail to create .replace file." << std::endl;
	}
	else
		std::cout << "fail to open " << av[1] << " file." << std::endl;
}

// av[1] = filename to open
// av[2] = s1 to find
// av[3] = s2 to replace s1 with