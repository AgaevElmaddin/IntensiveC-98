#ifndef EASYFIND_HPP
# define EASYFIND_HPP

#include <iostream>
#include <algorithm>
#include <vector>

class CannotFind: public std::exception
{
	virtual const char* what() const throw() {return "Cannot find!";}
};

template <typename T>
typename T::iterator	easyfind(T container, int finder)
{
	typename T::iterator it;

	it = find(container.begin(), container.end(), finder);
	if (it == container.end())
		throw CannotFind();
	else
		return (it);
}

#endif
