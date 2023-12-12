#include "Span.hpp"
#include <algorithm>

Span::Span(unsigned int N) : n(N) {
}

Span::Span(const Span& other){
	*this = other;
}

Span& Span::operator=(const Span& other) {
	if (this != &other)
	{
		this->array = other.array;
		this->n = other.n;
	}
	return *this;
}

Span::~Span() {}

Span::MaxElementNbr::MaxElementNbr() {}

const char* Span::MaxElementNbr::what() const throw() {
	return ("\33[45mMax number of elements!\33[0m");
}

Span::NoSpan::NoSpan() {}

const char* Span::NoSpan::what() const throw() {
	return ("\33[45mMax number of elements!\33[0m");
}

void	Span::addNumber(int nb){
	if (array.size() < n)
		array.push_back(nb);
	else
		throw MaxElementNbr();
}

void	Span::addNumber(int start, int end){
	if (end < start)
		std::swap(end, start);
	int starting = -1;
	while (++starting + start <= end) {
		if (array.size() < n)
			array.push_back(starting + start);
		else
			throw MaxElementNbr();
	}
}

int	Span::shortestSpan(){
	if (array.size() < 2)
		throw NoSpan();
	std::vector<int> copy = array;
	std::sort(copy.begin(), copy.end());

	int min = copy[1] - copy[0];
	for (size_t i = 2; i < copy.size(); ++i)
	{
		int span = copy[i] - copy[i - 1];
		min = std::min(span, min);
	}
	return min;
}

int	Span::longestSpan(){
	if (array.size() < 2)
		throw NoSpan();
	int res = *std::max_element(array.begin(), array.end()) -\
	*std::min_element(array.begin(), array.end());
	return res;
}