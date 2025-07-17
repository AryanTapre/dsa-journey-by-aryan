#include <iostream>
using namespace std; 

/**
 * @brief finds maximum and minimum element within 2D array. 
 */
void findMaxMin(int* array, const int rows, const int cols) {
    if (!array || (rows == 0 && cols == 0)) {
        // Invalid condition: array is nullptr, array is empty.
        return;
    }

    int mini = *(array + (0 * cols + 0));
    int maxi = *(array + (0 * cols + 0));

    for (size_t i = 0; i < rows; ++i) {
        for (size_t j = 0; j < cols; ++j ) {
            int currentElement = *(array + (i * cols + j));
            
            if (currentElement < mini) {
                mini = currentElement;
            } else if (currentElement > maxi) {
                maxi = currentElement;
            }
        }
    }

    cout << "maximum : " << maxi << ", minimum : " << mini << "\n";
}

int main() {
    // 2D array dimnesions: 3*4
    int seedData[] = {1,2,3,4,5,6,7,8,9,10,11,12};
    constexpr int rows = 3;
    constexpr int cols = 4;
    int index = 0;

    // allocatiing contiguous heap memory for 2D array.
    int* array = new int[rows * cols];

    for (size_t i=0; i<rows; ++i) {    
        for (size_t j=0; j<cols; ++j) {
            *(array + (i * cols + j)) = seedData[index];
            ++index; 
        }
    }

    findMaxMin(array, rows, cols);
    
    return 0;
}


