#include "PmergeMe.hpp"
#include <stdlib.h>
#include <sys/time.h>
#include <algorithm>
#include <iostream>

std::vector<long long> convertCharArrayToVector(char** charArray, int size) {
    std::vector<long long> result;

    for (int i = 0; i < size; ++i) {
        int number = std::atoi(charArray[i]);
        result.push_back(number);
    }

    return result;
}

std::list<long long> convertCharArrayToList(char** charArray, int size) {
    std::list<long long> result;

    for (int i = 0; i < size; ++i) {
        int number = std::atoi(charArray[i]);
        result.push_back(number);
    }

    return result;
}

long long getCurrentTimeMicros() {
    struct timeval currentTime;
    gettimeofday(&currentTime, NULL);
    return currentTime.tv_sec * 1000000LL + currentTime.tv_usec;
}

PmergeMe::PmergeMe(int size, char **av){
	std::vector<long long> vec = convertCharArrayToVector(av, size);
	std::list<long long> lst = convertCharArrayToList(av, size);

	std::cout << "Before: ";
    for (size_t i = 0; i < 20; ++i) {
        std::cout << vec[i] << " ";
    }
	if (vec.size() > 20)
		std::cout << "[...]";
    std::cout << std::endl;

	long long startVector = getCurrentTimeMicros();
    std::sort(vec.begin(), vec.end());
	long long endVector = getCurrentTimeMicros();
	double elapsedVector = static_cast<double>(endVector - startVector) / CLOCKS_PER_SEC;

	long long startList = getCurrentTimeMicros();
    lst.sort();
	long long endList = getCurrentTimeMicros();
	double elapsedList = static_cast<double>(endList - startList) / CLOCKS_PER_SEC;


	std::cout << "After: ";
    for (size_t i = 0; i < 20; ++i) {
        std::cout << vec[i] << " ";
    }
	if (vec.size() > 20)
		std::cout << "[...]";
    std::cout << std::endl;

	std::cout << "Time to process a range of " << size << " elements with std::vector : " << elapsedVector << " us" << std::endl;
	std::cout << "Time to process a range of " << size << " elements with std::list : " << elapsedList << " us" << std::endl;
}

PmergeMe::~PmergeMe(){}