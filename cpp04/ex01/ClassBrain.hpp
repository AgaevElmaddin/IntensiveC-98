#ifndef CLASSBRAIN_HPP
# define CLASSBRAIN_HPP

#include <iostream>

class ClassBrain
{
	public:
			ClassBrain();
			ClassBrain(const ClassBrain& copy);
			~ClassBrain();

			ClassBrain& operator=(const ClassBrain& copy);

	public:
				std::string ideas[100];
};

#endif
