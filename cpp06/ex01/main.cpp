#include "StructData.hpp"

int		main()
{
	Data data = {"Jordan", 18};
	uintptr_t uintptr;
	Data *res;

	std::cout << "Data:" << "the name is: " << data.name << " and the age is ";
	std::cout << data.age << std::endl;
	uintptr = serialize(&data);
	std::cout << "The value of uinptr: " << uintptr << std::endl;
	res = deserialize(uintptr);
	std::cout << "res:" << res->name << " " << res->age << std::endl;
	return (0);
}