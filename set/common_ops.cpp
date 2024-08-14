// Program to demonstrate important common operations on set
/*
    1. empty()          ->  bool empty() const noexcept;                    ->  TC - Constant
    2. size()           ->  size_type size() const noexcept;                ->  TC - Constant
    3. find()           ->  iterator find (const value_type& val);          ->  TC - Logrithmic
    4. lower_bound()    ->  iterator lower_bound (const value_type& val)    ->  TC - Logrithmic     -> Greater than or Equal to
    5. upper_bound()    ->  iterator upper_bound (const value_type& val)    ->  TC - Logrithmic     -> Greater than
    6. swap()           ->  void swap (set& x);                             ->  TC - Constant
    7. clear()          ->  void clear() noexcept;clear()                   ->  TC - Linear
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
    std::set<int>set;
    
    // 1. Verify Empty  TC - O(1)
    if(set.empty()) {
        std::cout << "Set is empty." << std::endl;
    }
        
    set.insert({15, 13, 14, 11, 12, 21, 29, 24, 32, 25});
    print(set);
    
    // 2. size()    TC - O(1)
    std::cout << "Set size: " << set.size() << std::endl;
    
    // 3. find()    TC - O(log(n))
    std::set<int>::iterator it = set.find(15);
    std::cout << "Element found: " << *it << std::endl;
    
    // 4. lower_bound()     TC - O(log(n))
    it = set.lower_bound(21);
    std::cout << "Element found with lower bound(21): " << *it << std::endl;
    
    // 5. upper_bound()     TC - O(log(n))
    it = set.upper_bound(21);
    std::cout << "Element found with upper bound(21): " << *it << std::endl;
    
    // 6. swap()        TC - O(1)
    std::set<int>newSet({101, 103, 102});
    set.swap(newSet);
    print(set);
    print(newSet);
    
    // 7. clear()       TC - O(1)
    newSet.clear();
    std::cout << "NewSet size: " << newSet.size() << std::endl;    
}
