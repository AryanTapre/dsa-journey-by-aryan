#include <iostream>
using namespace std; 

int main() { 
    int col = 0; 
    for (int row = 0; row < 3; row++) {
        for ( col; col < 5; col++) {
            cout << "*"<<" ";        
        }
        // resetting col to Zero
        col = 0;    
        cout << endl;
    }
}
