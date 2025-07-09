/** Performing all fundamental operations in un-sorted array ( order doesn't matter )
 *  (1) Insert an element at any position.
 *  (2) Remove an element from any position
 *  (3) Search an element.
 *  (4) Traverse entire array
 */

#include <iostream>
using namespace std; 

/**
 * @brief Inserts a new value into a fixed-capacity array at the specified position.
 * 
 * This function supports inserting into an empty array, appending at the end,
 * or placing a value at a middle index by shifting a single element to the end.
 * 
 * @param array The array where the new value will be inserted.
 * @param currentSize Reference to the current number of elements in the array. This will be incremented on successful insert. Technically always represents next index.
 * @param capacity The maximum number of elements the array can hold.
 * @param newValue The value to be inserted into the array.
 * @param position The index at which the new value should be inserted.
 *                Must satisfy: 0 ≤ position ≤ currentSize.
 * 
 * @return true if the value was successfully inserted;
 *         false if the array is full or the position is invalid.
 *
 * @note This function assumes that the array has enough space allocated to hold up to `capacity` elements.
 *       If inserting in the middle, the current element at `position` is pushed to the end of the array
 *       without shifting all subsequent elements.
 */

bool insertIntoArray(int array[], size_t& currentSize, size_t capacity, int newValue, size_t position) {
    // Capacity check
    if (currentSize >= capacity ) {
        return false; // Array is full
    }

    // Position validation
    if (position > currentSize) {
        return false; // Invalid insert position
    }

    // Checking the valid position to insert
    if (currentSize == 0) {
        array[0] = newValue;  // Array is empty, insert newValue at 0th index

    } else if (position == currentSize) { 
        array[currentSize] = newValue; // insert newValue at the end of array

    } else { // Somewhere in middle of array, if position < currentSize 
        array[currentSize] = array[position];  // Copy array[position] to array[currentSize]
        array[position] = newValue;  // insert newValue to array[position]
    }

    ++currentSize;

    return true;
}



/**
 * @brief Searches for a target within an array
 * 
 * @param array The array to search within.
 * @param length The number of elements in the array.
 * @param target The value to search for.
 * @return The index of the target if found; -1 otherwise
 */
int linearSearch(const int array[], size_t length, int target) {
    for (size_t index = 0; index < length; ++index) {
        if (array[index] == target) {
            return static_cast<int>(index);
        }
    }
    return -1;
}


void traverse(int arr[], size_t& size) {
    for (int index = 0; index < size; ++index) {    
        cout << arr[index] << " ";
    }
    cout << endl;
}

int main() { 
    int array[10]; 
    size_t size = 0;
    const int CAPACITY = 10;

    insertIntoArray(array, size, CAPACITY, 10, 0);
    insertIntoArray(array, size, CAPACITY, 55, 1);
    insertIntoArray(array, size, CAPACITY, 82, 1);

    traverse(array, size);
    
    return 0;
}
