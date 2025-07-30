// An array holding elements from 1 to N, but unfortunately one element is missing there, find that
/** demo:
 *  |1|2|3|4|6|7|8| 
 *  missing element is : 5
 */

#include <iostream>
#include <vector>
using namespace std; 


/**
 * @brief Find the missing element in sorted array.
 * 
 * Uses binary search
 * 
 * @param nums The sorted vector.
 * @return Missing element, -1 if not found. 
 */
int findMissingElement(const vector<int>& nums) {
  if (nums.empty() || nums.size() == 1) {
    return -1;
  }

  int low = 0;
  int high = nums.size() - 1;

  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (nums[mid] == mid + 1) {
      low = mid + 1;
    } else {
        if (nums[mid-1] == mid) {
          // Found the missing element
          return nums[mid-1] + 1;
        } else {
          // Eliminate the right half
          high = mid - 1;
        }
    }
  }
  
  return -1;
}

int main() {  
  vector<int> nums = {1,2,3,4,5,6,7,8};
  
  int result = findMissingElement(nums);
  if (result < 0) {
    cout << "No missing element found " << "\n";
  } else  {
    cout << "missing element is : " << result << "\n";
  }

  
  return 0;
}
