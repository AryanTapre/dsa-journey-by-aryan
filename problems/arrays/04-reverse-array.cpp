#include <iostream>
using namespace std; 

void reverseArray(int* array, const size_t currentSize) {
    if (!array || currentSize <= 0) {
        return;
    }

    int leftIndex = 0;
    int rightIndex = currentSize - 1;

    while (leftIndex <= rightIndex) {
        int temp = array[leftIndex];
        array[leftIndex] = array[rightIndex];
        array[rightIndex] = temp;

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

