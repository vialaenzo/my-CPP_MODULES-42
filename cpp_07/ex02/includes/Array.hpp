#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <iostream>
#include <stdexcept>

template <typename T>
class Array
{
public:
	Array();
	Array(unsigned int n);
	Array(Array const & src);
	~Array();

	Array & operator=(Array const & rhs);
	T & operator[](unsigned int i);
	unsigned int size() const;

private:
	T * _array;
	unsigned int _size;
};


#endif
