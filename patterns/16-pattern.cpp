// Solid Square pattern

#include <iostream>
using namespace std; 

int main() {
    int n;
    
    cout << "enter value of n:";
    cin >> n;

    for (size_t i = 0; i < n; i++) {
        for (size_t j = 0; j < n; j++) {
            cout << "*";    
        }
        cout << endl;
    }
    
    return 0;
}
