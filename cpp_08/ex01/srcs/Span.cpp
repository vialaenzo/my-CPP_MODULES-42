#include "Span.hpp"

void Span::addNumbers(int n)
{
	if (_valeurs.size() >= _n)
	{
		throw std::overflow_error("Span is already full");
	}
	_valeurs.push_back(n);
};

int Span::shortestSpan() const
{
	if (_valeurs.size() < 2)
		throw std::logic_error("Not enough numbers to find a span.");

	std::vector<int> sortNumbers = _valeurs;
	std::sort(sortNumbers.begin(), sortNumbers.end());

	int shortest = sortNumbers[1] - sortNumbers[0];
	for (size_t i = 1; i < sortNumbers.size() -1; ++i) {
		int diff = sortNumbers[i + 1] - sortNumbers[i];
		if (diff < shortest)
			shortest = diff;
	}
	return shortest;
}

int Span::longestSpan() const
{
	if (_valeurs.size() < 2)
		throw std::logic_error("Not enough numbers to find a span.");

	int min = *std::min_element(_valeurs.begin(), _valeurs.end());
	int max = *std::max_element(_valeurs.begin(), _valeurs.end());

	return max - min;
}


