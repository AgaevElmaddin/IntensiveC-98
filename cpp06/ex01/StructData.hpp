#ifndef STRUCTDATA_HPP
# define STRUCTDATA_HPP

#include <iostream>

typedef struct s_Data
{
	std::string name;
	int			age;
}				Data;

uintptr_t	serialize(Data* ptr);
Data*	deserialize(uintptr_t raw);

#endif
