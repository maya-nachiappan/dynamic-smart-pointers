//
//  pointerArray.cpp
//  
//
//  Created by maya nachiappan on 10/31/24.
//
#include <stdio.h>
#include "pointerArray.hpp"
#include <iostream> // For std::cout and std::cin
#include <memory>   // For std::shared_ptr
using namespace std;

// Function to fill the array with user input
void fillArray(unique_ptr<int[]>& array, int size) {
    cout << "Enter " << size << " integers:" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": ";
        cin >> array[i];
    }
}

// Function to calculate the sum of the array
int calculateSum(unique_ptr<int[]>& array, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum;
}

// Function to manage the input and output
void print() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    // Allocate memory for unique_ptr with a dynamic array
    unique_ptr<int[]> array(new int[size]);

    fillArray(array, size); // Fill the array with user input
    int sum = calculateSum(array, size); // Calculate the sum
    cout << "Sum of the array elements: " << sum << endl;
}
