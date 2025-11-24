// NOTE: Full Pyramid

#include <iostream>
using namespace std; 

int main() {
    int n;
    cout << "enter value of N :";
    cin >> n;
    
    // int starCount = -1;
    // for (int i = 0;  i < n; i++) {
    //     starCount += 2;
    //     for (int j = 0; j < n + i; j++) {
    //         int tempCount = starCount;
    //         if (j >= n - i - 1 && tempCount > 0) {
    //             cout << "*" << " ";
    //             tempCount -= 1;    
    //         } else {
    //             cout << " "<< " ";
    //         }    
    //     }
    //     cout << endl;    
    // }   
    
    // NOTE: Another way:

    for (int i = 0; i < n; i++) {
        int k = 0;
        for (int j = 0; j <= (n*2) - 2; j++) {
            if (j < n - i - 1) {
                cout << " " << " ";    
            } else if(k < 2 * i + 1) {
               if (k == 0 || k == 2 * i || i == n-1) {
                    cout << "*" << " ";         
               } else {
                    cout << " " << " ";
               }
               ++k;     
            } else {
                cout << " " << " ";
            }
                 
        }
        cout << endl;    
    }
    return 0;
}
