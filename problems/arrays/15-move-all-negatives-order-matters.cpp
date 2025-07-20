/** Moves all -ve numbers to left side of array - Order Matters!!!.
 */

#include <iostream>
using namespace std; 

/**
 * @brief Moves all -ve numbers to left size of array, where there Order matterns.
 * 
 * @param array The pointer representing Array.
 * @param SIZE The constant size of array.
 * @return void, Just perform operation within array.
 */
void moveLeftWithOrder(int *array, const int SIZE) {
    if (!array) {
        return;
    }

    // Allocate temporary array keeping tracking of positive numbers order in *array. 
    int *positiveNumberArray = new int[SIZE];
    int positiveArrayIndex = 0;

    int mainIndex = 0; // Main index traversing in *array
    int trackNegative = 0; // Tracking the negative elements order (pointer pointing to Next -Ve number in *array).
    
    while (mainIndex < SIZE) {
        /**
         * if the elements found +ve, store them into positiveNumberArray
         * So that the order of +ve numbers are persistence.
         */
        while (array[mainIndex] >= 0) {
            positiveNumberArray[positiveArrayIndex] = array[mainIndex];
            ++mainIndex;
            ++positiveArrayIndex;
        }

        // If element in *array is found -Ve we just copy it to location pointed by 'trackNegative' pointer.
        if (array[mainIndex] < 0) {
            array[trackNegative] = array[mainIndex];
            ++mainIndex;
            ++trackNegative;
        }   
    }

    // If There was positive numbers in *array, we need to copy them in *array
    if (positiveArrayIndex > 0) {  
        positiveArrayIndex = 0;

        while (trackNegative < SIZE) {
            array[trackNegative] = positiveNumberArray[positiveArrayIndex];
            ++trackNegative;
            ++positiveArrayIndex;
        }
    }
}

void traverseArray(int* array, int const SIZE) {
    if (!array) {
        return;
    }

    for (size_t i = 0; i < SIZE; ++i) {
        cout << array[i] << " ";
    }
    cout << "\n";
}

int main() { 
    int array[] = {3,9,1,10,8,17, 0, -1};    
    constexpr int SIZE = 8;

    moveLeftWithOrder(array, SIZE);
    traverseArray(array, SIZE);


    return 0;
}
