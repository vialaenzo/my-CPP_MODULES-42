// Main.cpp
#include <iostream>
#include "Serialization.hpp"

int main()
{
	Data data;
	data.value = 42;
	data.name = "Test";
	Data *originalPtr = &data;

	std::cout << "Original pointer address: " << originalPtr << std::endl;

	uintptr_t raw = Serializer::serialize(originalPtr);
	std::cout << "Serialized value: " << raw << std::endl;

	Data *deserializedPtr = Serializer::deserialize(raw);
	std::cout << "Deserialized pointer address: " << deserializedPtr << std::endl;

	if (originalPtr == deserializedPtr)
	{
		std::cout << "Success: Pointers match!" << std::endl;
		std::cout << "Deserialized Data -> value: " << deserializedPtr->value
				  << ", name: " << deserializedPtr->name << std::endl;
	}
	else
	{
		std::cout << "Error: Pointers do not match!" << std::endl;
	}

	return 0;
}
