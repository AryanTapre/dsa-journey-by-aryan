#include <iostream>
using namespace std; 


/**
 * Inserts a new value into an ordered array.
 * 
 * @param array The array to insert into.
 * @param currentSize Reference to the current number of elements.
 * @param capacity Maximum capacity of array.
 * @param newValue The value to insert.
 * @param position The index where new value must be inserted.
 * @return True if insert was successful; false otherwise
 */
bool insertIntoArray(int* array, size_t& currentSize, const size_t capacity, const int newValue, const size_t position) {
    if (!array || currentSize >= capacity || position > currentSize) {
        //Invalid conditions: nullptr, full array, invalid position.
        return false;
    }

    // Shift elements right to make room.
    for (size_t i = currentSize; i > position; --i) {
        array[i] = array[i - 1];
    }

    array[position] = newValue;
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
int linearSearch(const int* array, size_t currentSize, const size_t& capacity, const int target) {
    for (size_t index = 0; index < currentSize; ++index) {
        if (array[index] == target) {
            return static_cast<int>(index);
        }
    }
    return -1;
}

void traverseArray(const int* array, const size_t currentSize) {
    for (size_t i = 0; i < currentSize; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}


bool removeFromArray(int* array, size_t& currentSize, const size_t& capacity, int target) {
    if (!array || currentSize <= 0) {
        // Invalid conditions: nullptr, empty array
        return false;
    }

    // Searching whether element is present.
    int foundIndex = linearSearch(array, currentSize, capacity, target);


    if (foundIndex == -1) {
        return false; // target not found.
    }

    // target found, shifting elements towards left
    for (size_t i = foundIndex; i < currentSize - 1; ++i) {
        array[i] = array[i + 1];
    }

    --currentSize; // shrinking currentSize by 1

    return true;
    
}


int main() { 
    int array[6] = {5,89,55,12};
    constexpr size_t capacity = 6;
    size_t currentSize = 4;

    constexpr int newValue = 100;
    constexpr size_t position = 0; // Test for edge case: insert at beginning 

    if (insertIntoArray(array, currentSize, capacity, newValue, position)) {
        cout << "Insertion successful. \n";
    } else {
        cout << "Insertion failed. \n";
    }

    traverseArray(array, currentSize);
    cout << "size : "<< currentSize << endl;

    int target = 12;
    if (removeFromArray(array, currentSize, capacity, target)) {
        cout << "Remove successful, \n";
    } else {
        cout << "Remove failed. \n";
    }

    
    traverseArray(array, currentSize);
    cout << "size : " << currentSize << endl;

    return 0;
}
