#include "Span.hpp"

int main()
{
	try
	{
		Span sp = Span(5);
		sp.addNumbers(6);
		sp.addNumbers(3);
		sp.addNumbers(17);
		sp.addNumbers(9);
		sp.addNumbers(11);

		std::cout << "Shortest Span: " << sp.shortestSpan() << std::endl;
		std::cout << "Longest Span: " << sp.longestSpan() << std::endl;

		// Test avec plage d'itérateurs
		std::vector<int> range;
		range.push_back(100);
		range.push_back(200);
		range.push_back(300);
		range.push_back(400);
		range.push_back(500);
		Span largeSpan(10);
		largeSpan.addNumbers(range.begin(), range.end());
		std::cout << "Shortest Span (range): " << largeSpan.shortestSpan() << std::endl;
		std::cout << "Longest Span (range): " << largeSpan.longestSpan() << std::endl;
	}
	catch (const std::exception &e)
	{
		std::cerr << "Error: " << e.what() << std::endl;
	}

	return 0;
}
