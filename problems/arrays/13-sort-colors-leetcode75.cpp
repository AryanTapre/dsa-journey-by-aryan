// Leetcode problem no 75: sort colors
#include <iostream>
#include <vector>
using namespace std; 

/**
 * @brief sort the given vector in asceding order.
 * 
 * @param v the vector to perfom sort into.
 * @return void just do in-place sorting.
 */
void sortColors(vector<int>& v) { 
    size_t low = 0; // represent Zeros
    size_t medium = 0; // represents Onces
    size_t high = v.size() - 1; // represents Twos

    while (medium <= high) {
        if (v[medium] == 0) {
            swap(v[low], v[medium]);
            ++low;
            ++medium;
        } else if (v[medium] == 1) {
            ++medium;
        } else { 
            // v[medium] == 2
            swap(v[medium], v[high]);
            --high;
        }
    }
}

int main() { 
    vector<int> v = {2,0,2,1,0,2};
    
    sortColors(v);

    for (auto i : v) {
        cout << i <<" ";
    }
    cout << "\n";

    return 0;
}