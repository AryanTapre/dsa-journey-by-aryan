#include <iostream>
using namespace std; 

/**
 * @brief Counts the frequency of Zero's, and Once's within array.
 * 
 * @param array The to count within.
 * @param currentSize Determines the numbers of elements array is holding right now.
 * @return Void - just prints the count.
 */
void countZerosOnces(const int* array, const size_t currentSize) {
    if (!array) {
        // Invalid memory accessed: array -> nullptr
        cout << "Array doesn't exists: accessed nullptr. \n";
        return;
    }

    int zeroCount = 0, oneCount = 0;
    for (size_t i = 0; i < currentSize; ++i) {
        if (array[i] == 0) {
            ++zeroCount;
        } else {
            ++oneCount;
        }
    }

    cout << "Zero : " << zeroCount << "\n";
    cout << "One : " << oneCount << "\n";
}

int main() { 
    int array[] {1,0,1,0,0,0,1,1,0,0,1};
    constexpr size_t currentSize = 11;

    countZerosOnces(array, currentSize);

    return 0;
}
