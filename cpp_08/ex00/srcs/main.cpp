#include <iostream>
#include <vector>
#include <list>
#include "easyfind.hpp"

int main() {
    try {
        std::vector<int> vec;
        vec.push_back(1);
        vec.push_back(2);
        vec.push_back(3);

        std::vector<int>::iterator it = easyfind(vec, 2);
        std::cout << "Found value: " << *it << std::endl;

        it = easyfind(vec, 4); // Should throw an exception
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    try {
        std::list<int> lst;
        lst.push_back(10);
        lst.push_back(20);
        lst.push_back(30);

        std::list<int>::iterator it = easyfind(lst, 20);
        std::cout << "Found value: " << *it << std::endl;

        it = easyfind(lst, 40); // Should throw an exception
    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
