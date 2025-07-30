// Leetcode 852: Peak Index in a Mountain Array
#include <iostream>
#include <vector>
using namespace std; 

/**
 * @brief Finds the peak element in sorted array.
 * 
 * Peak elements: arr[mid-1] < arr[mid] > arr[mid+1]
 * Uses binary seach to eliminate seach space
 * 
 * @param arr The sorted vector of integers within which peak element to be found.
 * @return peak element index; -1 if peak not found.
 */
int peakIndexInMountainArray(vector<int>& arr) {
  int low = 0;
  int high = arr.size() - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (mid == 0) { // Edge case: there is nothing in left (index out of bound)
      low = low + 1;
      continue;
    } else if (mid == arr.size() - 1) { // Edge case: there is nothing in right (index out of bound)
      high = high - 1;
      continue;
    }

    if (arr[mid] > arr[mid-1] && arr[mid] > arr[mid+1]) { 
      return mid; // Peak element found.
    } else if (arr[mid-1] > arr[mid]) { 
        // eliminate right half (moving towards left half)
        high = mid - 1;
    } else {
        // eliminate left half (moving towards right half)
        // arr[mid+1] > arr[mid]
        low = mid + 1;
    }
  }
  return -1;
}

int main() {  
  vector<int> input = {0, 2, 1, 0};  

  cout << peakIndexInMountainArray(input) << endl;

  return 0;
}
