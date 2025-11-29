#include <iostream>
using namespace std; 

int main() {
    int n;

    cout << "enter value of n :";
    cin >> n;

    int count = 0;
    for (int i = 0; i < n; i++) {
        int star = i;
        for (int j = 0; j < 2*i+1; j++) {
            count++;
            cout << count << " ";
            
            if (star > 0) {
                cout << "* ";
                star--;
                j++;    
            }
        } 
        cout << endl;   
    }

    // printing the mirror.
    count = count - (n - 1) - 1;


    for (int i = n-1; i >= 0; i--) {
        int star = i;
        for (int j = 0; j < 2*i+1; j++) {
            count++;
            cout << count << " ";
            if (star > 0) {
                cout << "* ";
                star--;
                j++;    
            } 
        }
        
        // calculating value of count.
        int x = (count - i) - 1;
        count = x - i;
        cout << endl;
    }
    
    return 0;
}
