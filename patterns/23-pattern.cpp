// Fancy pattern 
#include <iostream>
using namespace std; 

int main() {
    int n;
    
    cout << "enter value of n:";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n + 3 - i; j++) {
            cout << "*";        
        }
        
        for (int j = 0; j < i + 1; j++) {
            cout << j + 1;
            if (j != i) {
                cout << "*";    
            }    
        }

        for (int j = 0; j < n + 3 - i; j++) {
            cout << "*";        
        }

        cout << endl;

    }
    return 0;
}
