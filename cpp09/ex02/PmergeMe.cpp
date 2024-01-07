#include "PmergeMe.hpp"
#include <stdlib.h>
#include <sys/time.h>
#include <algorithm>
#include <iostream>
#include <algorithm>
#include <iterator>

std::vector<int> convertCharArrayToVector(char** charArray, int size) {
    std::vector<int> result;

    int i = 0;
    while (i < size) {
        int number1 = std::atoi(charArray[i]);
        result.push_back(number1);
        i += 1;
    }

    return result;
}

std::list<int> convertCharArrayToList(char** charArray, int size) {
    std::list<int> result;

    int i = 0;
    while (i < size) {
        int number1 = std::atoi(charArray[i]);
        result.push_back(number1);
        i += 1;
    }

    return result;
}

long long getCurrentTimeMicros() {
    struct timeval currentTime;
    gettimeofday(&currentTime, NULL);
    return currentTime.tv_sec * 1000000LL + currentTime.tv_usec;
}

PmergeMe::~PmergeMe(){}

std::list<std::pair<int, int> > mergeList(std::list<std::pair<int, int> > left, std::list<std::pair<int, int> > right)
{
	std::list<std::pair<int, int> > res;
	while (!left.empty() && !right.empty())
	{
		if (left.front().first <= right.front().first)
		{
			res.push_back(left.front());
			left.pop_front();
		}
		else
		{
			res.push_back(right.front());
			right.pop_front();
		}
	}
	res.insert(res.end(), left.begin(), left.end());
    res.insert(res.end(), right.begin(), right.end());
	return res;
}

std::list<std::pair<int, int> > merge_sortList(std::list<std::pair<int, int> > list)
{
	if (list.size() <= 1)
		return list;
	std::list<std::pair<int, int> > left, right;
	size_t half = list.size() / 2;
	std::list<std::pair<int, int> >::iterator it;
	for (it = list.begin(); it != list.end(); ++it)
	{
		if (half-- > 0)
			left.push_back(*it);
		else
			right.push_back(*it);
	}
	left = merge_sortList(left);
	right = merge_sortList(right);
	return mergeList(left, right);
}

std::list<int> createList(std::list<std::pair<int, int> > pairs)
{
	std::list<int> list;
	std::list<std::pair<int, int> >::iterator it;
	for (it = pairs.begin(); it != pairs.end(); ++it)
		list.push_back(it->first);
	return list;
}

std::list<int>::iterator binarySearchList(std::list<int>& list, int target)
{
	std::list<int>::iterator left = list.begin();
	std::list<int>::iterator right = list.end();
	while (left != right) {
		std::list<int>::iterator mid = left;
		std::advance(mid, std::distance(left, right) / 2);

		if (*mid == target)
			return mid;
		else if (*mid < target) {
			++mid;
			left = mid;
		}
		else
			right = mid;
	}
    return left;
}

void	sortList(std::list<int>& list)
{
	bool odd_flag = false;
	int odd;
    if (list.size() <= 1) {
        std::cout << "Sequence too short." << std::endl;
    }
	std::list<std::pair<int, int> > pairs;
	std::list<int>::iterator it = list.begin();
	while (it != list.end())
	{
		int a = *it++;
		if (it == list.end())
		{
			odd = a;
			odd_flag = true;
			break ;
		}
		int b = *it++;
		pairs.push_back(std::make_pair(std::max(a, b), std::min(a, b)));
	}
    pairs = merge_sortList(pairs);
	list = createList(pairs);

	list.push_front(pairs.front().second);
	pairs.pop_front();
	if (odd_flag)
		list.insert(binarySearchList(list, odd), odd);
	while (!pairs.empty())
	{
		int target = pairs.front().second;
		list.insert(binarySearchList(list, target), target);
		pairs.pop_front();
	}
}

std::vector<std::pair<int, int> > mergeVector(std::vector<std::pair<int, int> > left, std::vector<std::pair<int, int> > right)
{
	std::vector<std::pair<int, int> > res;
	while (!left.empty() && !right.empty())
	{
		if (left.front().first <= right.front().first)
		{
			res.push_back(left.front());
			left.erase(left.begin());
		}
		else
		{
			res.push_back(right.front());
			right.erase(right.begin());
		}
	}
	res.insert(res.end(), left.begin(), left.end());
    res.insert(res.end(), right.begin(), right.end());
	return res;
}

std::vector<int> createVector(std::vector<std::pair<int, int> > pairs)
{
	std::vector<int> list;
	std::vector<std::pair<int, int> >::iterator it;
	for (it = pairs.begin(); it != pairs.end(); ++it)
		list.push_back(it->first);
	return list;
}

std::vector<int>::iterator binarySearchVector(std::vector<int>& vec, int target)
{
    size_t left = 0;
    size_t right = vec.size();

    while (left < right) {
        size_t mid = left + (right - left) / 2;

        if (vec[mid] == target)
            return vec.begin() + mid;
        else if (vec[mid] < target)
            left = mid + 1;
        else
            right = mid;
    }

    return vec.begin() + left;
}

std::vector<std::pair<int, int> > merge_sortVector(std::vector<std::pair<int, int> > vec)
{
	if (vec.size() <= 1)
		return vec;
	std::vector<std::pair<int, int> > left, right;
	size_t half = vec.size() / 2;
	// std::vector<std::pair<int, int> >::iterator it;
	for (size_t i = 0; i < (vec.size()); i++)
	{
		if (half-- > 0)
			left.push_back(vec[i]);
		else
			right.push_back(vec[i]);
	}
	left = merge_sortVector(left);
	right = merge_sortVector(right);
	return mergeVector(left, right);
}

void	sortVector(std::vector<int>& vec)
{
	bool odd_flag = false;
	int odd;
    if (vec.size() <= 1) {
        std::cout << "Sequence too short." << std::endl;
    }
	std::vector<std::pair<int, int> > pairs;
	// std::vector<int>::iterator it = vec.begin();
	size_t i = 0;
	while (i < vec.size())
	{
		int a = vec[i++];
		if (i == vec.size())
		{
			odd = a;
			odd_flag = true;
			break ;
		}
		int b = vec[i++];
		pairs.push_back(std::make_pair(std::max(a, b), std::min(a, b)));
	}
    pairs = merge_sortVector(pairs);
	vec = createVector(pairs);
	vec.insert(vec.begin(), pairs.front().second);
	pairs.erase(pairs.begin());
	if (odd_flag)
		vec.insert(binarySearchVector(vec, odd), odd);
	while (!pairs.empty())
	{
		int target = pairs.front().second;
		vec.insert(binarySearchVector(vec, target), target);
		pairs.erase(pairs.begin());
	}
}

int CheckOrderVec(std::vector<int> vec)
{
	for (size_t a = 0; a < vec.size() - 1; ++a)
	{
		if (vec[a] > vec[a+1])
			return 1;
	}
	return 0;
}

int CheckOrderLst(std::list<int> lst)
{
	std::list<int>::iterator it;
	for (it = lst.begin(); it != lst.end(); ++it)
	{
		std::list<int>::iterator next = ++it;
		if (it == lst.end())
			break;
		else if (*it < *next)
			return 1;
	}
	return 0;
}

PmergeMe::PmergeMe(int size, char **av){
	if( size < 2 ) {
		std::cerr << "not enouth numbers to sort." << std::endl;
		return;
	}
	std::vector<int> vec = convertCharArrayToVector(av, size);
	std::list<int> lst = convertCharArrayToList(av, size);

	std::cout << "Before: ";
    for (int i = 0; i < size; ++i) {
        std::cout << av[i] << " ";
        if (i == 20) {
            std::cout << "[...]";
            break;
        }
    }
    std::cout << std::endl;

	long long startVector = getCurrentTimeMicros();
    sortVector(vec);
	std::cout << CheckOrderVec(vec) << std::endl;
	double elapsedVector = static_cast<double>(getCurrentTimeMicros() - startVector) / CLOCKS_PER_SEC;

	long long startList = getCurrentTimeMicros();
    sortList(lst);
	std::cout << CheckOrderLst(lst) << std::endl;
	double elapsedList = static_cast<double>(getCurrentTimeMicros() - startList) / CLOCKS_PER_SEC;


	std::cout << "After: ";
    for (size_t z = 0; z < vec.size(); ++z) {
        std::cout << vec[z] << " ";
        if (z == 20) {
            std::cout << "[...]";
            break;
        }
    }
    std::cout << std::endl;

	std::cout << "Time to process a range of " << size << " elements with std::vector : " << elapsedVector << " us" << std::endl;
	std::cout << "Time to process a range of " << size << " elements with std::list : " << elapsedList << " us" << std::endl;
}

// void printList(std::list<std::pair<int, int> > list)
// {
// 	std::list<std::pair<int, int> >::iterator it;
// 	for (it = list.begin(); it != list.end(); ++it)
// 		std::cout << it->first << " ";
// 	std::cout << std::endl;
// }