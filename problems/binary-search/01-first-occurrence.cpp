// Find first occurrent index of target element found in array

#include <iostream>
#include <numsector>
using namespace std; 

/**
* @brief Finds the first occurrence of a target value in a sorted array.
*
* Uses binary search to find the First index at which 'target' appears.
*
* @param nums the sorted vector of integers to search in.
* @param target The value to search for.
* @return The index of the first occurrence of target, or -1 if not found. 
*/
int findFirstOccurrence(const vector<int>& nums, const int target) {
  if (nums.empty()) {
    return -1; // Edge case: empty input.
  }

  int low = 0;
  int high = nums.size() - 1;
  int firstOccurrenceIndex = -1;
  
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (nums[mid] == target) {
      firstOccurrenceIndex = mid;
      // Continue searching in the left half
      high = mid - 1;
    } else if (nums[mid] < target) {
      low = mid + 1;      
    } else { // nums[mid] > target
      high = mid - 1;    
    }
  }

  return firstOccurrenceIndex;
}

int main() {
  const vector<int> input = {1, 3, 4, 4, 4, 4, 4, 4, 6, 9}; 

  int result = findFirstOccurrence(input, 1);
  cout << "First occurrence index : " << result << endl;

  return 0;
}
