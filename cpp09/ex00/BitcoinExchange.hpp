#ifndef BITCOINEXCHANGE_HPP
#define BITCOINEXCHANGE_HPP

#include <map>
#include <string>

class BitcoinExchange
{
	private:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& other);
		BitcoinExchange& operator=(const BitcoinExchange& other);
		std::map<std::string, double> data;
		int	makedata(std::string filepath, int locker);

	public:
		BitcoinExchange(std::string filepath);
		~BitcoinExchange();
};


#endif