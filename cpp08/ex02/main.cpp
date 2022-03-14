#include "MutantStack.hpp"

// clang++ -std=c++98 -Wall -Wextra -Werror

int	main()
{
	MutantStack<int>	mstack;

	mstack.push(5);
	mstack.push(17);

	std::cout << mstack.top() << std::endl;
	std::cout << "/////////////////////////" << std::endl;
	mstack.pop();

	std::cout << mstack.size() << std::endl;
	std::cout << "/////////////////////////" << std::endl;
	mstack.push(3);
	mstack.push(5);
	mstack.push(17);
	//[...]
	mstack.push(0);

	{
		MutantStack<int>::iterator it = mstack.begin();
		MutantStack<int>::iterator ite = mstack.end();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
		std::stack<int> s(mstack);
	}

	std::cout << "/////////////////////////" << std::endl;

	{
		MutantStack<int>::reverse_iterator it = mstack.rbegin();
		MutantStack<int>::reverse_iterator ite = mstack.rend();

		++it;
		--it;
		while (it != ite)
		{
			std::cout << *it << std::endl;
			++it;
		}
	}

	std::cout << "/////////////////////////" << std::endl;

	std::list<int>	mlist;

	mlist.push_back(5);
	mlist.push_back(17);

	std::cout << mlist.back() << std::endl;
	std::cout << "/////////////////////////" << std::endl;
	mlist.pop_back();

	std::cout << mlist.size() << std::endl;
	std::cout << "/////////////////////////" << std::endl;
	mlist.push_back(3);
	mlist.push_back(5);
	mlist.push_back(17);
	//[...]
	mlist.push_back(0);

	{
	std::list<int>::iterator it = mlist.begin();
	std::list<int>::iterator ite = mlist.end();

	++it;
	--it;
	while (it != ite)
	{
		std::cout << *it << std::endl;
		++it;
	}
	std::list<int> s1(mlist);
	}

	return (0);
}
