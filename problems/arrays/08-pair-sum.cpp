#include <iostream>
#include<vector>
using namespace std; 


/**
 * @brief findout pairs whose sum is give with sum parameter.
 * 
 * @param v Vector upon which operation gonna happen.
 * @param sum Predefined sum value need to compare with pairs formed.
 * @return void prints the pair if found.
 */
void pairSum(const vector<int>& v, const int sum) {
    if (v.empty() || v.size() == 1) {
        // Invalid conditions: vector emptry, size == 1
        return;
    }

    for (size_t i = 0; i < v.size(); ++i) {
        for (size_t j = i+1; j < v.size(); ++j) {
            if (v.at(i) + v.at(j) == sum) {
                cout << "\n" << v.at(i) << ", " << v.at(j) << " ";
            }   
        }
    }
    cout << "\n";    
}

int main() { 
    vector<int> v = {1,2,3,8,9,4};
    constexpr int sum = 10;
    
    pairSum(v, sum);

    return 0;
}
