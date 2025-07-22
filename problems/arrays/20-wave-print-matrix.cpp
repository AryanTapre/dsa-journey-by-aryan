#include <iostream>
#include <vector>
using namespace std; 


/**
 * @brief Print the matrix in wave form
 *        wave: column wise print top-to-bottom
 *        ,and vice-versa, sequentially.
 * @param v A 2D array whose wave print is to be done.
 * @return Void, just print the wave.            
 */
void printWaveMatrix(vector<vector<int> > v) {
    int m = v.size(); // Numbers of Row.
    int n = v[0].size(); // Numbers of Column.

    for (int col = 0; col < n; ++col) {
        // Even no of col -> top to bottom print.
        if ((col & 1) == 0) {
            for (int i = 0;  i < m; ++i ) {
                cout << v[i][col] << " ";
            }
            
        } else {
            // Odd no of cols -> bottom to top print.
            for (int i = m - 1; i >= 0; --i) {
                cout << v[i][col] << " ";
            }
        }
    }

    cout << "\n";
}

int main() { 
   // vector<vector<int> > v(3, vector<int>(4));
   vector<vector<int> > v = {
    {1, 2, 3, 4},
    {5, 6, 7, 8},
    {9, 10 ,11 ,12}
   };

   printWaveMatrix(v);

    return 0;
}
