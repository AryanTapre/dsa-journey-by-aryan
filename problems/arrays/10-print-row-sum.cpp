#include <iostream>
using namespace std; 


/**
 * @brief prints sum for elements in 2D array
 * 
 * @param array The 2D array with elements.
 * @param rows Total numbers of rows in 2D array.
 * @param cols Total numbers of cols in 2D array.
 * @return void - just print the sum of all elements.
 */
void printRowSum(int* array, const int rows, const int cols) {
    if (!array) {
        // Invalid condition: array is nullptr.
        return;
    }
    int sum = 0;

    for (size_t i=0; i<rows; ++i) {
        for (size_t j=0; j<cols; ++j) {
            sum += *(array + (i * cols + j));
        }
    }
    cout << "sum of rows is " << sum << "\n";
}

int main() { 
    // 2D array dimnesions: 3*4
    int seedData[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    int rows = 3;
    int cols = 4;
    int index = 0;

    // allocatiing contiguous heap memory for 2D array.
    int* array = new int[rows * cols];

    for (size_t i=0; i<rows; ++i) {    
        for (size_t j=0; j<cols; ++j) {
            *(array + (i * cols + j)) = seedData[index];
            ++index; 
        }
    }

    printRowSum(array, rows, cols);

    return 0;
}
