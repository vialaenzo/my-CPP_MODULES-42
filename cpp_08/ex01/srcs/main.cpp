#include <iostream>
#include <vector>
#include "Span.hpp"

int main() {
    try {
        Span sp = Span(5);
        sp.addNumbers(6);
        sp.addNumbers(3);
        sp.addNumbers(17);
        sp.addNumbers(9);
        sp.addNumbers(11);

        std::cout << sp.shortestSpan() << std::endl;
        std::cout << sp.longestSpan() << std::endl;


        Span largeSpan(10000);
        std::vector<int> largeRange(10000, 1);
        largeSpan.addRange(largeRange.begin(), largeRange.end());

        std::cout << largeSpan.shortestSpan() << std::endl;
        std::cout << largeSpan.longestSpan() << std::endl;

    } catch (const std::exception &e) {
        std::cerr << e.what() << std::endl;
    }

    return 0;
}
