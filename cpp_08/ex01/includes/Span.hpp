#pragma once

#include <vector>
#include <algorithm>
#include <stdexcept>
#include <iterator>

class Span {
	private:
		unsigned int _N;
		std::vector<int> _numbers;
	public:

	Span(unsigned int N);

	void addNumbers(int numbers);
	unsigned int shortestSpan() const;
	unsigned int longestSpan() const;

	template <typename InputIterator>
	void addRange(InputIterator first, InputIterator last) {
		if (std::distance(first, last ) > static_cast<long>(_N - _numbers.size())) {
			throw std::length_error("Range to large to add to Span");
		}
		_numbers.insert(_numbers.end(), first, last);
	}
};
