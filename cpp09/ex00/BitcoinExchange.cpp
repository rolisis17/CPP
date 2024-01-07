#include "BitcoinExchange.hpp"
#include <algorithm>
#include <iostream>
#include <fstream>
#include <sstream>
#include <ctime>
#include <cstring>

int	findcomma(std::string str, int locker) {
	std::string tofind;
	if (!locker)
		tofind = ",";
	else
		tofind = "|";
	size_t comma = str.find(tofind);

	if (comma != std::string::npos)
		return comma;
	if (locker)
		std::cerr << "Error: bad input => " << str << std::endl;
	return -1;
}

bool isValidDate(const std::string& dateString, tm& date) {
    std::memset(&date, 0, sizeof(struct tm));

    if (std::sscanf(dateString.c_str(), "%d-%d-%d", &date.tm_year, &date.tm_mon, &date.tm_mday) != 3) {
    	return false;
    }

	if (date.tm_year > 2023)
		std::cerr << "\33[42mTHIS IS NOT A TIME MACHINE\33[0m" << std::endl;

    if (date.tm_year < 1900  || date.tm_mon < 1 || date.tm_mon > 12 || date.tm_mday < 1 || date.tm_mday > 31 || (date.tm_mon == 2 && (date.tm_mday == 30 || date.tm_mday == 31))) {
		return false;
    }

	if (date.tm_year < 2009)
		std::cerr << "\33[41mNO BITCOIN EXISTS AT THIS TIME\33[0m" << std::endl;

    if (mktime(&date) == -1) {
    	return false;
    }

    return true;
}

int	BitcoinExchange::makedata(std::string filepath, int locker) {
	std::ifstream	file(filepath.c_str());
	std::string		line;
	tm date;

	if (file.is_open()) {
		while (std::getline(file, line)) {
			if (!(line.empty())) {
				int comma = findcomma(line, locker);
				if (comma != -1)
				{
					std::string linedate(line.substr(0, comma));
					std::istringstream ss(line.substr(comma + 1));
					double price;
					ss >> price;
					if (!locker)
						data.insert(std::pair<std::string, double> (linedate, price));
					else
					{
						if (price <= 0)
        					std::cerr << "\33[45mError: " << price << " not a positive number.\33[0m" << std::endl;
						else if (price > 1000)
        					std::cerr << "\33[45mError: " << price << " too large number.\33[0m" << std::endl;
						else if (isValidDate(linedate, date))
						{
							std::map<std::string, double>::iterator it = data.lower_bound(linedate);
							if (it != data.begin())
								std::cout << (--it)->first << " => " << price << " = " << (price * it->second) << std::endl;
							else
								std::cout << "\33[49m" << it->first << " => " << price << " = " << (price * it->second) << "\33[0m" << std::endl;
						}
						else
        					std::cerr << "\33[45mError: bad input => " << linedate << "\33[0m" << std::endl;
						/* std::cout << isValidDate(linedate, date) << std::endl; */
					}
				}

			}
		}
	}
	else
		return 1;
	return 0;
}

BitcoinExchange::BitcoinExchange(std::string filepath) {
	makedata("data.csv", 0);
	makedata(filepath, 1);
}

BitcoinExchange::~BitcoinExchange() {}