#include <iostream>
using namespace std; 

int main() {
    int n;
    
    cout << "enter value of n:";
    cin >> n;

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            if (j == 0 || j == n - 1 || i == 0 || i == n - 1) {
                cout << "* ";    
            } else {
                cout << "  ";
            }            
        }
        cout << endl;    
    }
    return 0;
}
