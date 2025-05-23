#ifndef MAIN_HPP
#define MAIN_HPP

#include <cstring>
#include <stdexcept>

template <typename T>
void swap(T &a, T &b)
{
	T temp = a;
	a = b;
	b = temp;
}
template <typename T>
const T &min(const T &a, const T &b)
{
	return (b < a) ? b : a;
}
template <typename T>
const T &max(const T &a, const T &b)
{
	return (a < b) ? b : a;
}

#endif
