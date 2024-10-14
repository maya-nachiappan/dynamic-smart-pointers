//
//  main.cpp
//  dynamic smart pointers
//
//  Created by maya nachiappan on 10/14/24.
//

#include <iostream>
#include <memory> // For shared_ptr
#include <vector> // For vector
using namespace std;

// Function to fill the array with user input
void fillArray(shared_ptr<int[]>& array, int size) {
    cout << "Enter " << size << " integers" << endl;
    for (int i = 0; i < size; ++i) {
        cout << "Element " << i + 1 << ": " << endl;
        cin >> array[i];
    }
}

// Function to calculate the sum of the array
int calculateSum(shared_ptr<int[]>& array, int size) {
    int sum = 0;
    for (int i = 0; i < size; ++i) {
        sum += array[i];
    }
    return sum;
}

int main() {
    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    // Use shared_ptr for a dynamic array
    shared_ptr<int[]> array(new int[size]); // Allocate dynamic array

    fillArray(array, size); // Fill the array with user input
    int sum = calculateSum(array, size); // Calculate the sum

    cout << "Sum of the array elements: " << sum << endl;

    // The shared_ptr automatically cleans up the memory when it goes out of scope
    return 0;
}
