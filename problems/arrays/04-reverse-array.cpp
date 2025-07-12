#include <iostream>
using namespace std; 


/**
 * @brief reverseArray function reverse the array using Two-Pointer approach.
 * 
 * @param array The array to reverse with.
 * @param currentSize Determines no of elemnts array is currently holding.
 * @return Void - Just reverse the array elements by Swapping.
 * 
 */
void reverseArray(int* array, const size_t currentSize) {
    if (!array || currentSize <= 0) {
        // Invalid conditions: nullptr, array is empty.
        return;
    }

    int leftIndex = 0;
    int rightIndex = currentSize - 1;

    while (leftIndex <= rightIndex) {
        // Swapping
        int temp = array[leftIndex];
        array[leftIndex] = array[rightIndex];
        array[rightIndex] = temp;

        // Updating pointers.
        ++leftIndex;
        --rightIndex;
    }
}

void traverseArray(const int* array, const size_t currentSize) {
    for (size_t i = 0; i < currentSize; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

int main() { 
    int array[] {1,2,3,4,5,6,7};
    constexpr size_t currentSize = 7;

    reverseArray(nullptr, currentSize);

    traverseArray(array, currentSize);

    return 0;
}

