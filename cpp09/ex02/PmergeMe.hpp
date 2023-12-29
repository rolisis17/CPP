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

void	sortList(std::list<int>& list);
std::list<std::pair<int, int> >	merge_sortList(std::list<std::pair<int, int> > list);
std::list<std::pair<int, int> >	mergeList(std::list<std::pair<int, int> > left, std::list<std::pair<int, int> > right);
std::list<int>	createList(std::list<std::pair<int, int> > pairs);
std::list<int>::iterator	binarySearchList(std::list<int>& list, int target);
void	sortVector(std::vector<int>& list);
std::vector<std::pair<int, int> >	merge_sortVector(std::vector<std::pair<int, int> > list);
std::vector<std::pair<int, int> >	mergeVector(std::vector<std::pair<int, int> > left, std::vector<std::pair<int, int> > right);
std::vector<int>	createVector(std::vector<std::pair<int, int> > pairs);
std::vector<int>::iterator	binarySearchVector(std::vector<int>& list, int target);

#endif