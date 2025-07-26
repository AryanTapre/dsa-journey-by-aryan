#include <iostream>
using namespace std; 


/**
 * @brief It's a standard algorithm of binary-search applied over sorted array.
 * 
 * @param array The array within which search is to perform.
 * @param size Defines the current numbers of elements holding in array.
 * @param CAPACITY Defines the maximum elements holding capacity of array.
 * @param TARGET The element to search for.
 * 
 * @return Index of element if found; -1 otherwise. 
 */
int binarySearch(int* array, int size, int CAPACITY, const int TARGET) {
    if (!array || size == 0) {
        // Invalid condition, array is null or empty.
        return -1;
    }

    int low = 0;
    int high = size - 1;
    int mid = 0;

    while (low <= high) {
        mid = low + (high - low) / 2; // Avoid interger overflow.
        
        if (array[mid] == TARGET) {
            return mid;
        } else if (array[mid] < TARGET) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    // Target not found.
    return -1;
}

int main() { 
    int array[] = {8, 10, 11, 12, 18, 22, 29, 66, 77, 88};
    int target = 8;
    int size = 10;
    int capacity = 10;

    cout << binarySearch(array, size, capacity, target);
    cout << endl;

    return 0;
}
