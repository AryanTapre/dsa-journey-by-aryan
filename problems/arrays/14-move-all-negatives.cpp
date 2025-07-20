/* Moves all negative numbers to left side of array.
*/

#include <iostream>
using namespace std; 


/**
 * @brief Moves all -ve numbers to left size of array.
 * 
 * @param array Pointer pointing to contiguous block.
 * @param size Determines size of array.
 * @return void Just shuffle the elements within array
 */
void moveLeft(int* array, const int size) {
    if (!array) {
        // Invalid condition: array is pointing to nullptr.
        return;
    }

    size_t low = 0;
    size_t high = size - 1;

    while (low < high) {
        while (array[low] < 0) ++low;
        while (array[high] > 0) --high;
        
        if (array[low] >= 0 && array[high] < 0) {
            int temp = array[low];
            array[low] = array[high];
            array[high] = temp;
        }
    }
}

void traverseArray(int *array, const int size) {
    for (size_t i = 0; i < size; ++i) {
        cout <<  array[i] << " ";
    }
    cout << "\n";
}

int main() { 
    int array[] = {-1, 3, 8, -4, 9, -6, -13};
    constexpr int SIZE = 7;

    moveLeft(array, SIZE);
    traverseArray(array, SIZE);
    
    return 0;
}
