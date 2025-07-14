/** 
 * @file Find the unique element within unsorted array where each element has twice frequency except one.
 */

#include <iostream>
#include <vector>
using namespace std;


/** 
 * @brief Finds unique element within vector.
 * 
 * @param v Vector within which unique element to found.
 * @return -1 if vector is empty; unique element otherwise
 */
int findUniqueElement(vector<int> &v) {
    if (v.empty()) {
        //Invalid conditions: vector is empty.
        return -1;
    }
    
    int ans = 0;
    for (auto i : v) {
        // Performing XOR operation on vector elements.
        cout << "before: " << "ans = " << ans << " ,i = " << i << endl; 
        ans = ans ^ i; 
        cout << "after: " << "ans = " << ans << " ,i = " << i << endl; 
        
    }

    return ans;
}

int main() {
    vector<int> v = {1, 2 , 1};

    cout << findUniqueElement(v) << "\n";
    //cout << (1 ^ 4 ^ 7 ^ 1 ^ 4) << "\n";
    return 0;
}
 