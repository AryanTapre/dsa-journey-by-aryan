#include <iostream>
#include<vector>
using namespace std; 


/**
 * @brief extracting common elements from vector 'a', and 'b', The intersection.
 * 
 * @param a Vector a. 
 * @param b Vector b.
 * @return vector storing intersected elements for 'a', and 'b'; empty vector otherwise. 
 */
vector<int> intersectionArrays(const vector<int>& a, const vector<int>& b) {
    vector<int> intersectedArray;
    
    if (a.empty() || b.empty()) {
        // Invalid condition: Both vector must be present.
        return intersectedArray;        
    }

    for (size_t i = 0; i < a.size(); ++i) {  // Big-O (N^2).
        for (size_t j = 0; j < b.size(); ++j) {
            if (a[i] == b[j]) {
                intersectedArray.push_back(a[i]);
            }
        }
    }
    
    return intersectedArray;
}

int main() { 
    vector<int> a = {1,2,3,4,6,8};
    vector<int> b = {3,4,9,8};

    vector<int> result = intersectionArrays(a, b);

    for (auto i : result) {
        cout << i << " ";
    }
    cout << "\n";
    
    return 0;
}


