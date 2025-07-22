/** 
 * GFG practice : First Repeating element.
 */

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std; 

int firstRepeated(vector<int>& arr) {
    if (arr.empty()) {
        // Invalid condition: arr is empty
        return -1;
    }

    unordered_map<int, int> hash;

    for (size_t i = 0; i < arr.size(); ++i) {
        // Storing the frequencies of arr[i]th element into hash.
        hash[arr[i]]++;
    }
    
    for (size_t i = 0; i < arr.size(); ++i) {
        // If hash[arr[i]]'s frequency found more than 1; its repeating.
        if (hash[arr[i]] > 1) {
            return  i + 1;
        }
    }
    
    // No Duplicate element found.
    return -1;
} 

int main() { 
    vector<int> v = {11,3,10,4,11};

    cout << firstRepeated(v) << "\n";

    return 0;
}
