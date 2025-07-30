#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>
using namespace std; 

/**
 * @brief Find the total occurrence of target value in sorted array.
 * 
 * Uses binary seach to find first occurrence, last occurrence
 * and subtract first occurrence from last occurrence, all it returns is number of elements.
 * 
 * @param nums The sorted vector of integers to seach for.
 * @param target The value to search for.
 * @return The total occurrence of element found; 0 if not found.
 */
int totalOccurrence(const vector<int>& nums, const int target) {
  if (nums.empty()) {
    return 0; // vector is empty.
  }

  auto firstOccur = lower_bound(nums.begin(), nums.end(), target);
  auto lastOccur = upper_bound(nums.begin(), nums.end(), target);

  int ans = (lastOccur - firstOccur);

  return ans;

}

int main() {  
  vector<int> nums = {2,4,4,4,4,4,4,6,9};

  cout << "Total occurrence is : " << totalOccurrence(nums, 0) << endl;
  
  return 0;
}
