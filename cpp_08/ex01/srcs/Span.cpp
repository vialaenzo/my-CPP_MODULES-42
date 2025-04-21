#include "Span.hpp"
#include <climits>

Span::Span(unsigned int N) : _N(N) {}

void Span::addNumbers(int number)
{
	if (_numbers.size() >= _N)
	{
		throw std::overflow_error("Cannot add more numbers to Span");
	}
	_numbers.push_back(number);
}

unsigned int Span::shortestSpan() const
{
	if (_numbers.size() <= 1)
	{
		throw std::logic_error("Not enough numbers to find a span");
	}

	std::vector<int> sortedNumbers = _numbers;
	std::sort(sortedNumbers.begin(), sortedNumbers.end());

	unsigned int shortest = UINT_MAX;
	for (size_t i = 1; i < sortedNumbers.size(); ++i)
	{
		unsigned int span = sortedNumbers[i] - sortedNumbers[i - 1];
		if (span < shortest)
		{
			shortest = span;
		}
	}
	return shortest;
}

unsigned int Span::longestSpan() const
{
	if (_numbers.size() <= 1)
	{
		throw std::logic_error("Not enough numbers to find a span");
	}

	int minElem = *std::min_element(_numbers.begin(), _numbers.end());
	int maxElem = *std::max_element(_numbers.begin(), _numbers.end());
	return maxElem - minElem;
}
