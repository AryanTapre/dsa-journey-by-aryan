#include<iostream>
#include<vector>
using namespace std; 


/**
 * @brief sort Zeros and Onces in Array.
 * 
 * @param v Vector within which sorting needs to perform.
 * @return void just forge / alter into vector v (pass by reference).
 */
void sortZerosOnces(vector<int>& v) {
    if (v.empty()) {
        // Invalid condition: vector empty
        return;
    }

    int left = 0;
    int right = v.size() - 1;

    while (left < right) {
        if (v[left] != 0 && v[right] != 1) {
            int temp = v[left];
            v[left] = v[right];
            v[right] = temp;

            ++left;
            --right;
        }

        while (v[left] != 1) {
            ++left;
        }

        while (v[right] != 0) {
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