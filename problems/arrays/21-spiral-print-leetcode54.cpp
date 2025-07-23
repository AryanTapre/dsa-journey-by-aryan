// Spiral Print Leetcode: 54.

#include <iostream>
#include <vector> 
using namespace std; 

/**
 * @brief Spiral prinitng the matrix
 * sr = starting row
 * ec = ending column
 * er = ending row
 * sc = starting column.
 * 
 * @param v Vector of Vector
 * @return ans vector of int type, holding elements in spiral Order.
 */
vector<int> spiralPrint(vector<vector<int > >& v) {
    vector<int> ans;
    int m = v.size(); // rows
    int n = v[0].size(); // colums
    int total_elements = m * n;
    int count = 0;    
    
    int sr = 0;
    int ec = n - 1;
    int er = m - 1;
    int sc = 0;
    
    while (count < total_elements) {
        // print starting row
        for (int i = sc; i <= ec && count < total_elements; ++i) {
            ans.push_back(v[sr][i]);
            ++count;        
        }

        sr++;
        // print ending column
        for (int i = sr; i <= er && count < total_elements; ++i) {
            ans.push_back(v[i][ec]);
            ++count;
        }

        ec--;
        // print ending row
        for (int i = ec; i >= sc && count < total_elements; --i) {
            ans.push_back(v[er][i]);
            ++count;
        }

        er--;
        // print starting column
        for (int i = er; i >= sr && count < total_elements; --i) {
            ans.push_back(v[i][sc]);
            ++count;
        }

        sc++;
    }

    return ans;

}

int main() { 
    const size_t m = 6;
    const size_t n = 4;

    vector<vector<int > > v(m, vector<int>(n));
    v = {
        {1, 12, 13, 24},
        {2, 11, 14, 23},
        {3, 10, 15, 22},
        {4, 9, 16, 21},
        {5, 8, 17, 20},
        {6, 7, 18, 19}
    };

    vector<int> ans =  spiralPrint(v);

    for (auto i : ans) {
        cout << i << " ";
    }
    cout << "\n";

    return 0;
}
