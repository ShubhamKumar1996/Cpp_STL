#include <iostream>
#include <set>

void print(int elementInserted, bool isInserted) {
    if(isInserted) {
        std::cout << "Element Inserted: " << elementInserted << std::endl;
    } else {
        std::cout << "Failure in Insertion " << std::endl;
    }
}

void print(std::set<int>set) {
    std::cout << "Printing set elements: ";
    for(auto it=set.begin(); it!=set.end(); it++) {
        std::cout << *it << " ";
    }
    std::cout << std::endl;
}

int main() {
    std::set<int>set;
    std::set<int>::iterator it;
    std::pair<std::set<int>::iterator, bool> res;
    
    // Insert() in set
    // 1. insert(const value_type) -> pair<iterator, bool> -> Element Insertion
    // 2. insert(iterator position, const value_type) -> iterator -> Position Insertion
    // 3. insert(iterator first, iterator last) -> void -> Range Insertion
    // 4. insert(initializer_list<value> il) -> void -> List Insertion
    
    // 1. insert(const value_type) -> pair<iterator, bool>
    res = set.insert(10);
    print(*res.first, res.second);
    
    res = set.insert(10);
    print(*res.first, res.second);
    
    // 2. insert(iterator position, const value_type) -> iterator
    it = set.insert(res.first, 7);      // High Efficiency when iterator is pointing to right position for this element
    print(*it, it!=set.end());
    
    it = set.insert(set.begin(), 11);   // Low efficiency; incorrect position specified by the iterator.
    print(*it, it!=set.end());
    
    // 3. insert(iterator first, iterator last) -> ?
    std::set<int>set2({101, 100, 102});
    set.insert(set2.begin(), set2.end());
    print(set);
    
    // 4. insert(initializaer_list<value> il) -> void
    set.insert({1002, 1001, 1000});
    print(set);
    
}
    
    