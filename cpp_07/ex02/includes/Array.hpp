#ifndef ARRAY_HPP
#define ARRAY_HPP

#include <stdexcept>
#include <cstdlib>


template <class T>
class Array
{
public:
    Array() : _size(0), arr(NULL) {}

    Array(unsigned int size) : _size(size), arr(new T[size]()) {}

    Array(const Array &other) : _size(other._size), arr(new T[other._size])
    {
        for (unsigned int i = 0; i < _size; ++i)
            arr[i] = other.arr[i];
    }

    Array &operator=(const Array &other)
    {
        if (this != &other)
        {
            delete[] arr;
            _size = other._size;
            arr = new T[_size];
            for (unsigned int i = 0; i < _size; ++i)
                arr[i] = other.arr[i];
        }
        return *this;
    }

    ~Array() { delete[] arr; }

    unsigned int size() const { return _size; }

    T &operator[](int i)
    {
        if (i < 0 || i >= static_cast<int>(_size))
            throw std::out_of_range("Index out of range");
        return arr[i];
    }

    const T &operator[](int i) const
    {
        if (i < 0 || i >= static_cast<int>(_size))
            throw std::out_of_range("Index out of range");
        return arr[i];
    }

private:
    unsigned int _size;
    T *arr;
};

#endif // ARRAY_HPP
