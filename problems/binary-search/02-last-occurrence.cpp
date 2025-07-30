// Find last occurrence index of target element found in sorted array

#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 

/**
 * @brief Finds the last occurrent of target value in sorted array.
 * 
 * Uses binary seach algorithm to find last index at which 'target' appears.
 * 
 * @param nums The sorted vector of integers to search in.
 * @param target The value to search for.
 * @return The index of last occurrence of element; -1 if not found.
 */
int getLastOccurenceIndex(const vector<int>& nums, const int target) {
  if (nums.empty()) {
    // Invalid condition: nums is empty.
    return -1; 
  }

  int low = 0;
  int high = nums.size() - 1;
  int lastOccurrenceIndex = -1;

  while (low <=high) {
    int mid = low + (high - low) / 2;

    if (nums[mid] == target) {
      lastOccurrenceIndex = mid;
      // Continue searching in the right half
      low = mid + 1;
    } else if (nums[mid] < target) {
      low = mid + 1;
    } else { // nums[mid] > target
      high = mid - 1;
    }
  }
  return lastOccurrenceIndex;
} 

int main() {  
  vector<int> input = {1,3,4,4,4,4,4,4,6,9};
  const int target = 0;

  int result = getLastOccurenceIndex(input, target);
  cout << "last occurrence is : " << result << "\n";

  cout << "Using STL upper_bound : ";
  auto ans = upper_bound(input.begin(), input.end(), target);
  cout << ans - input.begin() << endl; 
  
  return 0;
}
