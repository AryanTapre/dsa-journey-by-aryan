// Numeric Hollow half pyramid

#include <iostream>
using namespace std; 

int main() {
    int n;

    cout << "enter value of n:";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n - i; j++) {
            if (j == 0 || j == n - i - 1 || i == 0) {
                if (j == n - i - 1) {
                    cout << n;    
                } else {
                    cout << j + 1 << " ";    
                }
            } else {
                cout << "  ";
            }        
        }
        cout << endl;    
    }

    return 0;
}
