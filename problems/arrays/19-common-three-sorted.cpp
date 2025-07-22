/** Commonin 3 Sorted Array: GFG Practice */

#include <iostream>
#include <vector>
#include <set>
using namespace std; 

/**
 * @brief find common elements with three sorted arrays.
 * 
 * @param arr1 first vector to find in.
 * @param arr2 second vector to find in.
 * @param arr3 third vector to find in.
 * 
 * @return vector<int> holding common elements; -1 ot
 */
vector<int> commonElements(vector<int> &arr1, vector<int> &arr2, vector<int> &arr3) {
    int i = 0;
        int j = 0;
        int k = 0;
        set<int> st;
        vector<int> ans;
        
        while (i < arr1.size() && j < arr2.size() && k < arr3.size()) {
            if ((arr1[i] == arr2[j]) &&  (arr2[j] == arr3[k])) {
                st.insert(arr1[i]);
                ++i;
                ++j;
                ++k;
            } else if (arr1[i] < arr2[j]) {
                ++i;
            } else if (arr2[j] < arr3[k]) {
                ++j;
            } else {
                ++k;
            }
        }
        
        for (auto i : st) {
            ans.push_back(i);
        }
        return ans;

}

int main() { 
    vector<int> a = {1,5,10,20,40,80};
    vector<int> b = {6,7,20,80,100};
    vector<int> c = {3,4,15,20,30,70,80,120};

    vector<int> result = commonElements(a, b, c);
    for (auto x : result) {
        cout << x << " ";
    }
    
    cout << "\n";
    
    if (result.size() == 1 && result[0] == -1) {
        cout << "No common elements found.\n";
    } else {
        cout << "Common elements found.\n";
    }
    
    
    return 0;
}
