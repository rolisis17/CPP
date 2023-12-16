#ifndef PMERGEME_HPP
#define PMERGEME_HPP

#include <vector>
#include <list>

class PmergeMe {
	private:
		PmergeMe();
		PmergeMe(const PmergeMe& other);
		PmergeMe& operator=(const PmergeMe& other);

	public:
		PmergeMe(int ac, char **av);
		~PmergeMe();
};

#endif