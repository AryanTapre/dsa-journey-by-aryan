#include <iostream>
#include<vector>
using namespace std; 

/**
 * @brief Union two Arrays named 'a', 'b'.
 * 
 * @param a The vector with elements
 * @param b The vector with elments.
 * @return Vector with union of two arrays.
 */
vector<int> unionArrays(vector<int>& a, vector<int>& b) {
    vector<int> result;
    result.reserve(a.size() + b.size());  // Reserve memory upfront for efficiency

    result.insert(result.begin(), a.begin(), a.end());
    result.insert(result.end(), b.begin(), b.end());

    return result;
}

int main() { 
    vector<int> a = {1,2,3};
    vector<int> b = {1,2,4};

    vector<int> ans = unionArrays(a, b);

    for (auto i : ans) {
        cout << i << " ";
    } 
    cout << "\n";
    
    return 0;
}
