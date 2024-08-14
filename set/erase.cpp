// Program to demonstrate usage of erase() function of set container

/*
    Erase() in set
    1. iterator  erase (const_iterator position);                      Position Removal
    2. size_type erase (const value_type& val);                        Element Removal
    3. iterator  erase (const_iterator first, const_iterator last);    Range Removal
*/

#include <iostream>
#include <set>

void print(std::set<int>set) {
    std::cout << "Printing set elements: ";
    for(auto it=set.begin(); it!=set.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::set<int>set({15, 13, 14, 11, 12, 21, 29, 24, 32, 25});
    print(set);
    
    // 1. iterator  erase (const_iterator position);       Position Removal
    std::cout << "Position Removal: " << std::endl;
    std::set<int>::iterator it = set.find(14);
    if(it != set.end()) {
        it = set.erase(it);
        print(set);
        std::cout << "Next Element after 14: " << *it << std::endl;
    }
        
    // 2. size_type erase (const value_type& val); -> Returns number of element removed     Element Removal
    std::cout << "Element Removal" << std::endl;
    int removedCount = set.erase(13);
    std::cout << "Removed Count: " << removedCount << std::endl;
    print(set);
    
    // 3. iterator  erase (const_iterator first, const_iterator last);    Range Removal
    std::cout << "Range Removal" << std::endl;
    std::set<int>::iterator startItr = set.find(21);
    std::set<int>::iterator endItr = set.find(25);
    set.erase(startItr, endItr);            // Excludes last element i.e 25
    print(set);
}
    
    
