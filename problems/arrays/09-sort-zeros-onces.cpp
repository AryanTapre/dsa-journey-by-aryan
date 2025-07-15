#include<iostream>
#include<vector>
using namespace std; 

/**
 * @brief Sorts an array consisting of only 0s and 1s.
 *        Uses two-pointer technique, in-place.
 *
 * @param v Reference to the vector to sort.
 */
void sortZerosOnces(vector<int>& v) {
    if (v.empty()) return;

    size_t left = 0;
    size_t right = v.size() - 1;

    while (left < right) {
        while (left < right && v[left] == 0) ++left;
        while (left < right && v[right] == 1) --right;

        if (left < right) {
            swap(v[left],v[right]);
            ++left;
            --right;
        }
    }
}

int main() { 
    vector<int> v = {0,1};

    sortZerosOnces(v);

    for (auto i : v) cout << i << " ";
    cout << "\n";

    return 0; 

}