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

void traverseArray(const int* array, const size_t currentSize) {
    for (size_t i = 0; i < currentSize; i++) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

int main() { 
    int array[6] = {8, 9, 16, 23};
    constexpr size_t capacity = 6;
    size_t currentSize = 4;

    constexpr int newValue = 89;
    constexpr size_t position = 0; // Test for edge case: insert at beginning 

    if (insertIntoArray(NULL, currentSize, capacity, newValue, position)) {
        cout << "Insertion successful. \n";
    } else {
        cout << "Insertion failed. \n";
    }

    traverseArray(array, currentSize);

    return 0;
}
