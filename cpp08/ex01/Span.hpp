#ifndef SPAN_HPP
#define SPAN_HPP

#include <vector>

class Span
{
	private:
		std::vector<int> array;
		unsigned int n;
		Span();

	public:
		Span(unsigned int N);
		Span(const Span& other);
		Span& operator=(const Span& other);
		void	addNumber(int nb);
		void	addNumber(int start, int end);
		int		shortestSpan();
		int		longestSpan();
		~Span();

	class MaxElementNbr : public std::exception
	{
		public:
			MaxElementNbr();
			virtual const char* what() const throw();
	};

	class NoSpan : public std::exception
	{
		public:
			NoSpan();
			virtual const char* what() const throw();
	};
};

#endif