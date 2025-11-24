

#include <iostream>
using namespace std; 

int main() {
    int n;
    cout << "enter value of n:";
    cin >> n;
    
    for (int i = 0; i < n; i++) {
        for (int k = 0; k < i; k++) {
            cout << " ";    
        }
        for (int k = 0; k < n - i; k++) {
            cout << "* ";        
        }
        cout << endl;    
    }

    return 0;
}
