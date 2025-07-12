#include <iostream>
using namespace std; 

/**
 * @brief Finds the maximum element within array.
 * 
 * @param array The array within which to seach for max ele.
 * @param currentSize Determines array holding number of elements now.
 * @return The maximum if found; otherwise -1.
 */
int findMax(int* array, const size_t currentSize) {
    int max = -1;
    
    if (!array) { 
        // Invalid memory accessed: array -> nullptr
        return max;
    }

    if (currentSize > 0) {
        // Array has atleast one element.
        max = array[0];
    }

    for (size_t i = 1; i < currentSize; ++i) {
        if (array[i] > max) { 
            max = array[i]; // Updating max with array[i]; new Maximum uptill now.
        }
    }

    return max;
}

int main() { 
    int array[] {};
    constexpr size_t currentSize = 0;

    cout << "max is : " << findMax(array, currentSize) << "\n";

    return 0;
}
