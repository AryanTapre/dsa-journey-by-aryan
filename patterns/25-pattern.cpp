#include <iostream>
using namespace std; 

int main() {
    int n;
    
    cout << "enter value of n:";
    cin >> n;
    
    for (int i = 0; i < n ; i++) {
        int count = 0;
        for (int j = 0; j < 2*i+1; j++) {
            if (j == 0 || j == 2*i ) {
                cout << "* ";     
            } else {
                if (j <= i) {
                    ++count;
                    cout << count << " ";
                } else {
                    --count;
                    cout << count << " ";
                }
            }       
        }    
        cout << endl;    
    }

    // printing the mirror
    for (int i = n-2; i>=0; i--) {
        int count = 0;
        for (int j = 0; j < 2*i+1; j++) {
            if (j == 0 || j == 2*i) {
                cout << "* ";
            } else {
                if (j <= i) {
                    ++count;
                    cout << count << " ";    
                } else {
                    --count;
                    cout << count << " ";
                }
            }
        }    
        cout << endl;
    }    

    return 0;
}
