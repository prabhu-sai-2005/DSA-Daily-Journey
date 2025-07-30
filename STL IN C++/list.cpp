#include <iostream>
#include <list>

int main() {
    // Create a list of integers
    std::list<int> numbers;

    // Add elements to the list
    numbers.push_back(10);   // Add to the end
    numbers.push_back(20);
    numbers.push_front(5);   // Add to the beginning

    std::cout << "Initial list: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Insert element in the middle
    std::list<int>::iterator it = numbers.begin();
    ++it; // move iterator to the second position
    numbers.insert(it, 15); // insert 15 before the second element

    std::cout << "After inserting 15: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Remove an element
    numbers.remove(20); // removes all occurrences of 20

    std::cout << "After removing 20: ";
    for (int num : numbers) {
        std::cout << num << " ";
    }
    std::cout << std::endl;

    // Size of the list
    std::cout << "Size of the list: " << numbers.size() << std::endl;

    // Clear the list
    numbers.clear();
    std::cout << "List cleared. Is empty? " << (numbers.empty() ? "Yes" : "No") << std::endl;

    return 0;
}
