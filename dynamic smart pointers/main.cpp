//
//  main.cpp
//  dynamic smart pointers
//
//  Created by maya nachiappan on 10/14/24.
//

#include <iostream>
#include <memory> // For shared_ptr
#include <vector> // For vector

// Function to fill the array with user input
void fillArray(std::shared_ptr<int[]>& array, int size) {
    std::cout << "Enter " << size << " integers" << std::endl;
    for (int i = 0; i < size; ++i) {
        std::cout << "Element " << i + 1 << ": " << std::endl;
        std::cin >> array[i];
    }
}

// Function to calculate the sum of the array
int calculateSum(std::shared_ptr<int[]>& array, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int size;
    std::cout << "Enter the number of elements: ";
    std::cin >> size;

    // Use shared_ptr for a dynamic array
    std::shared_ptr<int[]> array(new int[size]); // Allocate dynamic array

    fillArray(array, size); // Fill the array with user input
    int sum = calculateSum(array, size); // Calculate the sum

    std::cout << "Sum of the array elements: " << sum << std::endl;

    // The shared_ptr automatically cleans up the memory when it goes out of scope
    return 0;
}
