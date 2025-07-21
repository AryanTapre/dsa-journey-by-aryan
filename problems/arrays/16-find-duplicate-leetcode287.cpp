// Leetcode 287. Find the Duplicate Number.

#include <iostream>
#include <vector>
using namespace std; 

/** 
 * @brief find the duplicate element within vector nums. (Negative marking approach).
 * 
 * @param nums Vector within which duplicate is to find.
 * @return element whose frequency is more than one; -1 otherwise
 */
int findDuplicatesNegativeMarking(vector<int> nums) {
    for (size_t i=0; i<nums.size(); ++i) {
        // Store nums[i] in 'element' variable
        int element = abs(nums[i]); 

        // If nums[i] i.e element when mapped with the index nums[nums[i]] found -ve, meaning element is Duplicate.
        if (nums[element] < 0) {
            return element;
        }

        // Marking element Negative.
        nums[element] *= -1;
    }
    
    // No duplicate found.
    return -1;
}

/**
 * @brief Shuffle elements with respect to thier indexes.
 *        swap(nums[i], nums[nums[i]])
 * 
 */
int findDuplicates(vector<int> nums) {
    constexpr size_t i = 0;

    while (true) {
        // Duplicate found: nums[i] matches with nums[ nums[i] ]. 
        if (nums[i] == nums[nums[i]]) {
            return nums[i];
        }
        // Shuffle elements.
        swap(nums[i], nums[nums[i]]); 
    }

    // No duplicate found.
    return -1;
}

int main() { 
    vector<int> v = {1,3,4,2,2};

    cout << findDuplicatesNegativeMarking(v) << "\n";
    cout << findDuplicates(v) << "\n";

    return 0;
}
