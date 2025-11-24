#include <iostream>
using namespace std; 

int main() {
    int row;
    
    cout << "what should be total rows: ";
    cin >> row;
    
    for (int i = 0; i < row; i++) {
        for (int j = 0; j < row - i; j++) {
            cout << "*" << " ";    
        }
        cout << endl;
    }
    return 0;
}
