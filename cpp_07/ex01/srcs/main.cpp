#include "iter.hpp"
#include <string>

template <typename T>
void print_element(T const &element)
{
	std::cout << element << " ";
}

int main(void)
{
	int int_array[] = {1, 2, 3, 4, 5};
	std::cout << "Int array: ";
	iter(int_array, 5, print_element<int>);
	std::cout << std::endl;

	std::string string_array[] = {"Hello", "World", "!"};
	std::cout << "String array: ";
	iter(string_array, 3, print_element<std::string>);
	std::cout << std::endl;

	char char_array[] = {'a', 'b', 'c', 'd', 'e'};
	std::cout << "Char array: ";
	iter(char_array, 5, print_element<char>);
	std::cout << std::endl;

	return 0;
}
