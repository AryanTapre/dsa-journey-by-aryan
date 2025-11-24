#include <iostream>
using namespace std; 

int main() {
    int row;
    int col;
    
    cout << "enter rows:";
    cin >> row;
    cout << "enter column:";
    cin >> col;

    for (int i = 0; i < row; i++) {
        for (int j = 0; j < col; j++) {
            if (i == 0 || i == row - 1) { // first row or last row.
                cout << "*" << " ";    
            } else {
                if (j == 0 || j == col - 1) { // first col and last col of row except first and last.
                    cout << "*" << " ";    
                } else {
                    cout << " " << " "; // printing space.
                }        
            }    
        }
        cout << endl;
    }
    return 0;
}
