// Find the ODD currening element in an array
// All repeating occurrence of elements appear in pairs, and pair are not adjacent 
// (there cannot be more than 2 consective occurrerence of any element).
// Find the element that appears ODD no. of times.

#include <iostream>
#include <vector>
using namespace std; 

/** 
 * @brief Finds the element having ODD occurrence.
 * 
 * Uses binary searches in indices,
 * Observation: All element residing left half of Ans element has Pair of first element on Even index, and second element on Odd index.
 * All elements resifing right half of And has Pair of first element on Odd index, and second element on Even index.
 * 
 * @param numss The vector containg Odd and Even occurrences of element.
 * @return Odd Occurring element; -1 if not found!.
 */
int findOddOccurrence(vector<int>& nums) {
  if (nums.empty()) {
    // Invalid condition: nums is empty.
    return -1;
  }

  int low = 0;
  int high = nums.size() - 1;
  int save = -1;

  while (low <= high) {
    int mid = low + (high - low) / 2;
    
    if (mid % 2 == 0) { 
      // Handling EVEN case
      if (mid < high && nums[mid] == nums[mid + 1]) {
        low = mid + 2;
      } else {
        save = nums[mid]; // Might be possible ans, saving it!.
        high = mid - 1;
      }
    } else {
      // Handling ODD case
      if (mid < high && nums[mid] == nums[mid + 1]) {
        high = mid - 1;
      } else {
        low = mid + 1;
      }
    } 
  }
  return save;
}

int main() {  
  vector<int> nums = {10,1, 1, 2, 2, 3, 3, 4, 4, 3, 600, 600, 4, 4};

  cout << findOddOccurrence(nums) << "\n";

  return 0;
}
