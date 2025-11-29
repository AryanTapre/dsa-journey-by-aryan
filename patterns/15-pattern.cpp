// Alpabet Palindrome Pyramid 

#include <iostream>
using namespace std; 

int main() {  
    int n;

    cout << "enter value of n:";
    cin >> n;

    for (int i = 0; i < n; i++) {
        char ch = 64;
        for (int j = 0; j < 2*i+1; j++) {
            if (j < i + 1) {
                ch += 1;
                cout << ch;    
            } else {
                ch -= 1;
                cout << ch;
            }    
        }
        cout << endl;
    }
    return 0;
}
