//
//  pointerArray.hpp
//  
//
//  Created by maya nachiappan on 10/31/24.
//

#ifndef pointerArray_hpp
#define pointerArray_hpp
#include <memory> // For shared_ptr
#include <vector> // For vector
#include <stdio.h>
using namespace std;

// Function to fill the array with user input
void fillArray(shared_ptr<int[]>& array, int size);

// Function to calculate the sum of the array
int calculateSum(shared_ptr<int[]>& array, int size);

//function to print output
void print();
#endif /* pointerArray_hpp */
