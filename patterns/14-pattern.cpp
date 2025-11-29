// Fancy pattern
#include <iostream>
using namespace std; 

int main() {
    int n;
    
    cout << "enter value of n:";
    cin >> n;

    for (int i = 0; i < n; i++) {
        int starCount = i;
        for (int j = 0; j < i + 1; j++) {
            cout << i + 1;
            if (starCount) {
                cout << "*";
                --starCount;
            }    
        }
        cout << endl;    
    }

    for (int i = 0; i < n; i++) {
        int starCount = n - i - 1;

        for (int j = 0; j < n - i; j++) {
            cout << n - i;
            if (starCount) {
                cout << "*";
                --starCount;    
            }
        }
        cout << endl;    
    }
    
    return 0;
}
