#include <iostream>
using namespace std; 

int main() {
    int row;
    cout << "enter no of rows : ";
    cin >> row;
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row; j++) {
            if (i == 0 || j == 0 || j == row - i - 1 ) {
                cout << "*"<< " ";     
            } else {
                cout << " " << " ";
            }                        
        }
        cout << endl;               
    }
    
    return 0;
}
