/** Find missing elements from array with duplicates */

#include <iostream>
#include <vector>
using namespace std; 

vector<int> findMissingElements(vector<int> v) {
    if (v.empty()) {
        vector<int> em;
        return em;
    }

    vector<int> missingElements;

    for (size_t i = 0; i < v.size(); ++i) {
        while (v[i] != i + 1) {
            if (v[i] == v[v[i] - 1]) {
                missingElements.push_back(i + 1);
                break;
            }
            swap(v[i], v[v[i] - 1]);
        }
    }

    return missingElements;
}


// Another method: negative-marking.
void findMissingNegativeMarking(vector<int> nums) {
    if (nums.empty()) {
        return;
    } 

    for (size_t i=0; i<nums.size(); ++i) {
        int index = abs(nums[i]);

        if (nums[index-1] > 0) {
            nums[index-1] *= -1;
        }
    }

    // All +ve indexes are missing.
    for (int i=0; i<nums.size(); ++i) {
        if (nums[i] > 0) {
            cout << i + 1 << " ";
        }
    }
    cout << "\n";
}

int main() { 
    vector<int> v = {3, 3, 3, 3, 3};

    vector<int> missings = findMissingElements(v);

    for (auto i : missings) {
        cout << i << " ";
    }
    cout << "\n";

    findMissingNegativeMarking(v);

    return 0;
}
