#include <exception>
#include <iomanip>
#include <iostream>

#include "iter.hpp"

template <typename U>
void printElement(const U &element) {
    std::cout << element << " ";
}


int main()
{
	std::cout << "NUMBERS\n\n" << std::endl;

	int array[] = {1, 2, 3, 4, 5};
	size_t length = sizeof(array) / sizeof(array[0]);

	std::cout << "Elements of the array: ";
	iter(array, length, printElement);
	std::cout << std::endl;

	std::cout << "ALPHAS\n\n" << std::endl;
	char charArray[] = {'a', 'b', 'c', 'd', 'e'};
    size_t charLength = sizeof(charArray) / sizeof(charArray[0]);

    std::cout << "Elements of the character array: ";
    iter(charArray, charLength, printElement);
    std::cout << std::endl;


	return 0;
}
