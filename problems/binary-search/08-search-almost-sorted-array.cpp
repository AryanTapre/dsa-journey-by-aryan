// GFG practice: Search in an almost sorted array.

#include <iostream>
#include <vector>
using namespace std; 

/**
 * @brief Finds the index of a target in a almost sorted array
 * (each element may be misplaced by +1 or -1 position).
 * 
 * Uses modified version of binary search checking mid and its neighbors.
 * 
 * @param arr Input array (almost sorted).
 * @param target Value to search for.
 * @return Index of target if found, else -1.      
 */
int findTarget(vector<int>& arr, int target) {
  int low = 0;
  int high  = arr.size() - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    // Check mid
    if (arr[mid] == target) return mid;
    // Check left neighbor
    if (mid > low && arr[mid - 1] == target) return mid - 1;
    // Check right neighbor
    if (mid < high && arr[mid + 1] == target) return mid + 1;
    
    // Now do binary search step (skip 2 indices cause' mid +-1 already checked)
    if (arr[mid] < target) {
      low = mid + 2;
    } else {
        high = mid - 2;
    }
  }
  return -1;
}

int main() {
  vector<int> arr = {10,3,40,20,50,80,70};
  int target = 9;
  
  cout << "element found at indice : " << findTarget(arr, target) << "\n";

  return 0;
}
