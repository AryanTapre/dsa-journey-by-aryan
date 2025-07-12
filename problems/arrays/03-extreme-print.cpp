#include <iostream>
using namespace std; 


/**
 * @brief This functions does extreme print of array element using Two Pointer Approach.
 * 
 * @param array The array to perform operations on.
 * @param currentSize Determines no. of elements currently holded by array.
 * @return Void - just print elements in extreme way.
 */
void extremePrint(int* array, const size_t currentSize) {
    if (!array || currentSize <= 0) {
        // Invalid conditions: nullptr, array is empty.
        return;
    }

    int leftIndex = 0, rightIndex = currentSize - 1;

    while (leftIndex <= rightIndex) {
        if (leftIndex == rightIndex) { 
            cout << array[leftIndex];  //Avoiding duplicate printing of same element.
        } else {
            cout << array[leftIndex] << " " << array[rightIndex] << " ";
        }

        // Updating pointers
        ++leftIndex;
        --rightIndex;
    }
    
    cout << "\n";
}

int main() { 
    int array[] {1,2,3};
    constexpr size_t currentSize = 3;

    extremePrint(array, currentSize);

    return 0;
}
