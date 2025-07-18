#include <iostream>
#include<vector>
using namespace std; 


/**
 * @brief Transpose the given 2D vector / array.
 * 
 * @param v 2D vector within which transpose operation needs to perform.
 * @return void - just perform transpose at address of vector
 */
void transpose(vector<vector<int>>& v) {
    if (v.empty()) {
        // Invalid condition: vector is empty.
        return;
    }

    // Scan vector v, store elements onto 1D array.
    vector<int> tempData;
    int index = 0;
    
    for (size_t i=0; i<v.size(); ++i) {
        for (size_t j=0; j<v[0].size(); ++j) {
            tempData.push_back(v[i][j]);
        }
    }

    // Transposing the vector v.
    for (size_t j=0; j<v[0].size(); ++j) {
        for (size_t i=0; i<v.size(); ++i) {
            v[i][j] = tempData[index];
            index++;            
        }
    }
}

void traverseVector(const vector<vector<int>>& v) {
    for (size_t i = 0; i < v.size(); i++)
    {
        for (size_t j = 0; j < v[0].size(); j++)
        {
            cout << v[i][j] << " ";
        }
        cout << "\n";
        
    }

    cout << "\n";
    
}

int main() { 
    vector<vector<int> > v = {
        {2,4,6},
        {8,10,12},
        {19,20,16}
    };

    transpose(v);
    traverseVector(v);

    return 0;
}
