// TODO: Hollow Full Pyramid 
#include <iostream>
using namespace std; 

int main() {
    int n;
    cout << "enter value of N :";
    cin >> n;
    
    int starCount = -1;

    for (int i = 0;  i < n; i++) {
        starCount += 2;
        int tempCount = starCount;

        for (int j = 0; j < n + i; j++) {
            if (i < n - 1) { 
                if (j >= n - i - 1) {
                    if (j == n - i - 1 || tempCount == 1) {
                        cout << "*" << " ";
                    } else {
                        cout << " "<< " ";
                    }
                    tempCount -= 1;    
                } else {
                    cout << " "<< " ";
                }    
            } else { // Print * for last row i.e. N-1th Row.
                cout << "*" << " ";
            }    
        }
        cout << endl;    
    }   
    return 0;
}
