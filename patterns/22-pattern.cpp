// Numeric Palindrome equilateral pyramid

#include <iostream>
using namespace std; 

int main() {
    int n;
    
    cout << "enter value of n:";
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n-i-1; j++) {
            cout << "  ";    
        }
        int count = 0;
        for (int j = 0; j < 2*i+1; j++) {
                if (j < i + 1) {
                    count+= 1;
                    cout << count << " ";    
                } else {
                    count -= 1;
                    cout << count << " ";
                }   
            
        }        
        cout << endl;
    }

    return 0;
}
