#include <iostream>
using namespace std; 


/**
 * @brief Finds an element in 2D matrix / grid / array.
 * 
 * Uses binary search to find the element's index
 * Calculations:
 * Row Index = mid / total-no-of-columns
 * Col Index = mid % total-no-of-columns
 * 
 * @param array The 2D sorted array of integers within which element to be found
 * @param rows Determines total no of rows
 * @param cols Determines total no of columns
 * @param target The element to be found in 2D array
 * @return The index of element (starting from Zero); -1 if not found
 */
int binarySearch(int array[5][4], int rows, int cols, int target) {
  if (!array) {
    // Invalid condition: array is nullptr
    return -1;
  }

  int low = 0;
  int high = (rows*cols) - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    int rowIndex = mid / cols; // Formula to calculate rows index
    int colIndex = mid % cols; // Formual to calculate column index

    if (array[rowIndex][colIndex] == target) {
      return mid;
    } else if (array[rowIndex][colIndex] < target) {
      // search in right half
      low = mid + 1; 
    } else {
        // search in left half
        high = mid - 1;
    }    
  }
  return -1;
}

int main() {
  int array[5][4] = {
    {3,6,7,9},
    {10,12,13,14},
    {15,16,18,20},
    {24,25,26,28},
    {30,32,34,40}
  };  

  int rows = 5;
  int cols = 4;
  int target = 1;

  cout << "element found at : " << binarySearch(array, rows, cols, target) << "\n";
  return 0;
}
