#ifndef SPAN_HPP
# define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>

class Span
{
	private:
			unsigned int N;
			std::vector<int> vect;
	public:
			Span();
			Span(unsigned int N);
			Span(const Span& copy);
			~Span();

			Span& operator=(const Span& copy);

			unsigned int getN(void);
			int			getLenVect(void) const;
			int	getValueVector(int i) const;

			void	addNumber(int nbr);
			int		shortestSpan();
			int		longestSpan();

			class FullSpanException: public std::exception
			{
				virtual const char* what() const throw();
			};

			class NotEnoughNumbersException: public std::exception
			{
				virtual const char* what() const throw();
			};

			void	rangeOfIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end);

			void	fillVect();
};

std::ostream& operator<<(std::ostream& out, const Span& span);

#endif
