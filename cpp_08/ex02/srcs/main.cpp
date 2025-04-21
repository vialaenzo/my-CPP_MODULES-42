#include <iostream>
#include "MutantStack.hpp"
#include <list>

int main() {
    // Test de base
    MutantStack<int> mstack;
    mstack.push(5);
    mstack.push(17);
    //std::cout << "Top element: " << mstack.top() << std::endl; // Should print 17
    //mstack.pop();
    //std::cout << "Size after pop: " << mstack.size() << std::endl; // Should print 1

    mstack.push(3);
    mstack.push(5);
    mstack.push(737);
    mstack.push(0);

    // Test des itérateurs
    std::cout << "Elements in MutantStack:" << std::endl;
    MutantStack<int>::iterator it = mstack.begin();
    MutantStack<int>::iterator ite = mstack.end();
    while (it != ite) {
        std::cout << *it << std::endl;
        ++it;
    }

    // Test de copie dans std::stack
    std::stack<int> s(mstack);
    std::cout << "Top element of std::stack: " << s.top() << std::endl; // Should print 0

    // Test avec un autre conteneur (std::list)
    std::list<int> lst;
    lst.push_back(5);
    lst.push_back(17);
    lst.push_back(3);
    lst.push_back(5);
    lst.push_back(737);
    lst.push_back(0);

    std::cout << "Elements in std::list:" << std::endl;
    for (std::list<int>::iterator lit = lst.begin(); lit != lst.end(); ++lit) {
        std::cout << *lit << std::endl;
    }

    // Test de MutantStack avec des opérations supplémentaires
    MutantStack<int> mstack2;
    mstack2.push(1);
    mstack2.push(2);
    mstack2.push(3);

    std::cout << "Elements in MutantStack2:" << std::endl;
    for (MutantStack<int>::iterator it2 = mstack2.begin(); it2 != mstack2.end(); ++it2) {
        std::cout << *it2 << std::endl;
    }

    // Test de l'opérateur d'affectation
    MutantStack<int> mstack3;
    mstack3 = mstack2;

    std::cout << "Elements in MutantStack3 after assignment:" << std::endl;
    for (MutantStack<int>::iterator it3 = mstack3.begin(); it3 != mstack3.end(); ++it3) {
        std::cout << *it3 << std::endl;
    }

    // Test de constructeur de copie
    MutantStack<int> mstack4(mstack3);

    std::cout << "Elements in MutantStack4 after copy construction:" << std::endl;
    for (MutantStack<int>::iterator it4 = mstack4.begin(); it4 != mstack4.end(); ++it4) {
        std::cout << *it4 << std::endl;
    }

    return 0;
}
