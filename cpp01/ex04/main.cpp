/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.cpp                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mseo <mseo@student.42seoul.kr>             +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/07 16:34:01 by mseo              #+#    #+#             */
/*   Updated: 2022/01/08 00:47:23 by mseo             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <iostream>
#include <string>
#include <fstream>

void	replacestring(std::string line, std::string &newline, std::string s1, std::string s2)
{
	std::size_t	pos = 0;
	
	pos = line.find(s1, pos);
	if (pos != 0)
		newline.append(line, 0, pos);
	newline.append(s2);
	pos += s1.length();
	line.erase(0, pos);
	if (line.find(s1) == std::string::npos)
	{
		newline.append(line);
		return ;
	}
	else
		replacestring(line, newline, s1, s2);
}

void	changestring(std::ifstream &fin, std::ofstream &fout, std::string s1, std::string s2)
{
	std::string	line;
	std::size_t	start_pos;
	std::string	newline;
	
	while (!fin.eof())
	{
		start_pos = 0;
		std::getline(fin, line);
		if (line.find(s1, start_pos) == std::string::npos)
			fout << line;	
		else
		{
			replacestring(line, newline, s1, s2);
			fout << newline;
			newline.clear();
		}
		if (!fin.eof())
			fout << std::endl;
	}
	fout.close();
	fin.close();
}

int	main(int argc, char **argv)
{
	if (argc != 4) {
		std::cout << "argc is not 4, You must write FILENAME s1 s2" << std::endl;
		return (0);
	}
	std::string	s1 = argv[2];
	std::string s2 = argv[3];
	if (s1.empty() || s2.empty()) {
		std::cout << "s1 or s2 must NOT EMPTY" << std::endl;
		return (0);
	}
	std::ifstream file(argv[1]);
	if (file.fail())
	{
		std::cout << argv[1] << " : File found fail" << std::endl;
		return (0);
	}
	std::string	newfile = argv[1];
	newfile.append(".replace");
	std::ofstream	outFile(newfile);
	if (outFile.fail())
	{
		std::cout << "Fail : File make" << std::endl;
		file.close();
		return (0);
	}
	changestring(file, outFile, s1, s2);
	return (0);
}
