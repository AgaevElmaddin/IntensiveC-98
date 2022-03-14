#include "Span.hpp"

Span::Span()
{
	this->N = 0;
}

Span::Span(unsigned int N)
{
	this->N = N;
}

Span::Span(const Span& copy)
{
	this->N = copy.N;
	this->vect = copy.vect;
}

Span::~Span()
{

}

Span& Span::operator=(const Span& copy)
{
	if (this == &copy)
		return *this;
	this->N = copy.N;
	this->vect = copy.vect;
	return *this;
}

unsigned int	Span::getN(void)
{
	return (this->N);
}

const char* Span::FullSpanException::what() const throw()
{
	return ("Error: Span is full. You can't add extra element!");
}

void	Span::addNumber(int nbr)
{
	if (this->vect.size() == this->getN())
		throw Span::FullSpanException();
	vect.push_back(nbr);
}

const char* Span::NotEnoughNumbersException::what() const throw()
{
	return ("Error: Not enough numbers in order to estimate them!");
}

int		Span::shortestSpan()
{
	std::vector<int>			tmp;
	int						difference;
	std::vector<int>::iterator	it;

	tmp = this->vect;
	difference = -1;
	if (this->vect.size() <= 1)
		throw Span::NotEnoughNumbersException();
	sort(tmp.begin(), tmp.end());
	difference = std::abs(*(tmp.begin() + 1) - *(tmp.begin()));
	if (this->vect.size() == 2)
		return difference;
	for (it = tmp.begin() + 1; it != tmp.end() - 1 && difference != 0; it++)
	{
		if (std::abs(*(it + 1) - *it) < difference)
			difference = *(it + 1) - *it;
	}
	return difference;
}

int		Span::longestSpan()
{
	std::vector<int>	tmp;

	tmp = this->vect;
	if (this->vect.size() <= 1)
		throw NotEnoughNumbersException();
	sort(tmp.begin(), tmp.end());
	return *(tmp.end() - 1) - *(tmp.begin());
}

void	Span::rangeOfIterators(std::vector<int>::iterator begin, std::vector<int>::iterator end)
{
	std::vector<int> tmp(begin, end);
	if (end - begin <= getN())
		std::copy(begin, end, std::back_inserter(this->vect));
	else
		throw FullSpanException();
}

int			Span::getLenVect(void) const
{
	return (this->vect.size());
}

int	Span::getValueVector(int i) const
{
	return this->vect[i];
}

std::ostream& operator<<(std::ostream& out, const Span& span)
{
	for (int i = 0; i < span.getLenVect(); i++)
	{
		out << span.getValueVector(i) << std::endl;
	}
	return (out);
}

void	Span::fillVect()
{
	for (int i = 0; i < 19999; i++)
		this->addNumber(rand() % 20000);
}
