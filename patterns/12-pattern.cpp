// TODO: Hollow solid diamond

#include <iostream>
using namespace std; 

int main() {
    int n;
    cout << "enter value of n : ";
    cin >> n;

    // print straight hollow diamond.
    for (int i = 0; i < n; i++) {
        // print spaces.
        for (int k = 0; k < n - i - 1; k++) {
            cout << " ";    
        }
        // print stars
        for (int k = 0; k < i + 1; k++) {
            if (k == 0 || k == i) {
                cout << "* ";        
            } else {
                cout << "  ";
            }        
        }
        cout << endl;        
    }

    // printing inverted hollow diamomd
    for (int i = 0; i < n; i++) {
        // print spaces
        for (int k = 0; k < i; k++) {
            cout << " ";    
        }
        
        // print star
        for (int k = 0; k < n - i; k++) {
            if (k == 0 || k ==  n - i - 1) {
                cout << "* ";    
            } else {
                cout << "  ";
            }    
        }    
        cout << endl;
    }
    
    return 0;
}
