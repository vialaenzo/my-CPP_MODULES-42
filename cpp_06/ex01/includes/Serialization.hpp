// Serialization.hpp
#ifndef SERIALIZATION_HPP
#define SERIALIZATION_HPP

#include <string>
#include <stdint.h>

struct Data
{
	int value;
	std::string name;
};

class Serializer
{
public:
	static uintptr_t serialize(Data *ptr);

	static Data *deserialize(uintptr_t raw);
};

#endif // SERIALIZATION_HPP
