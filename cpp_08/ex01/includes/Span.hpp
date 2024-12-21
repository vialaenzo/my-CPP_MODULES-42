#ifndef SPAN_HPP
#define SPAN_HPP

#include <iostream>
#include <vector>
#include <algorithm>
#include <exception>

class Span
{
	private:
		unsigned int _n;
		std::vector<int> _valeurs;

	public:
		Span(unsigned int n) : _n(n) {};
		Span(const Span &Span) {
			*this = Span;
		};
		Span &operator=(const Span &Span) {
			_n = Span._n;
			_valeurs = Span._valeurs;
			return *this;
		};
		~Span() {
			_valeurs.clear();
		};

		void addNumbers(int n);
		int shortestSpan() const;
		int longestSpan() const;


		template <typename Iterator>
		void addNumbers(Iterator begin, Iterator end)
		{
			size_t rangeSize = std::distance(begin, end);
			if (_valeurs.size() + rangeSize > _n)
			{
				throw std::overflow_error("Adding range exceeds soan capacity.");
			}
			_valeurs.insert(_valeurs.end(), begin, end);
		}
};

#endif
