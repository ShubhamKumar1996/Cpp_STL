// Program to demonstrate common operation in multiset container.

#include <iostream>
#include <set>

void print(std::multiset<int>multiset) {
    std::cout << "Printing multiset elements: ";
    for(auto it=multiset.begin(); it!=multiset.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::multiset<int>multiset({15, 13, 14, 11, 12, 21, 29, 24, 25, 11, 15, 21});       // Allow duplicate keys
    print(multiset);
    
    // Rest all are exactly same as set container.    
}
