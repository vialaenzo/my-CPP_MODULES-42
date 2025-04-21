#ifndef MUTANTSTACK_HPP
#define MUTANTSTACK_HPP

#include <stack>
#include <deque>

template <typename T>
class MutantStack : public std::stack<T> {
public:
    MutantStack() : std::stack<T>() {}
    MutantStack(const MutantStack<T>& other) : std::stack<T>(other) {}
    ~MutantStack() {}

    MutantStack& operator=(const MutantStack<T>& other) {
        if (this != &other) {
            std::stack<T>::operator=(other);
        }
        return *this;
    }

    typedef typename std::deque<T>::iterator iterator;
    typedef typename std::deque<T>::const_iterator const_iterator;

    iterator begin() {
        return this->c.begin();
    }

    const_iterator begin() const {
        return this->c.begin();
    }

    iterator end() {
        return this->c.end();
    }

    const_iterator end() const {
        return this->c.end();
    }
};

#endif
